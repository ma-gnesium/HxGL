//
//  HxGLAppDelegate.m
//  HxGL
//
//  Created by Caue Joffe on 7/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "IPhone.h"

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
	GLuint _depthRenderBuffer;
	GLuint framebuffer;
	GLint framebufferWidth;
	GLint framebufferHeight;
	
	BOOL animating;
    NSInteger animationFrameInterval;
    CADisplayLink *displayLink;
}

+ (EAGLRenderingAPI) api;
+ (void) setApi:(EAGLRenderingAPI)newapi;
- (void)startAnimation;
- (void)stopAnimation;

@end

@interface HxGLAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	OpenGLView *glView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet OpenGLView *glView;

@end

// --- UIView -------------------------------------------------------------
@implementation OpenGLView
static EAGLRenderingAPI api;

+ (EAGLRenderingAPI) api { return api; }
+ (void) setApi:(EAGLRenderingAPI)newapi { api = newapi; }

+ (Class)layerClass {
    return [CAEAGLLayer class];
}

- (void)setupLayer {
    _eaglLayer = (CAEAGLLayer*) self.layer;
    _eaglLayer.opaque = YES;
	animationFrameInterval = 30;
}

- (void)setupContext {   
    _context = [[EAGLContext alloc] initWithAPI: [OpenGLView api]];
    if (!_context) {
        NSLog(@"Failed to initialize OpenGLES 2.0 context");
        exit(1);
    }
    
    if (![EAGLContext setCurrentContext:_context]) {
        NSLog(@"Failed to set current OpenGL context");
        exit(1);
    }
}


- (void)setup {
	[EAGLContext setCurrentContext:_context];
	// Create default framebuffer object.
    glGenFramebuffers(1, &framebuffer);
    glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);

    // Create color render buffer and allocate backing store.
    glGenRenderbuffers(1, &_colorRenderBuffer);
    glBindRenderbuffer(GL_RENDERBUFFER, _colorRenderBuffer);
    [_context renderbufferStorage:GL_RENDERBUFFER fromDrawable:(CAEAGLLayer *)self.layer];
    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_WIDTH, &framebufferWidth);
    glGetRenderbufferParameteriv(GL_RENDERBUFFER, GL_RENDERBUFFER_HEIGHT, &framebufferHeight);
	printf("w %d  h %d", framebufferWidth, framebufferHeight);

    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, _colorRenderBuffer);

    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        NSLog(@"Failed to make complete framebuffer object %x", glCheckFramebufferStatus(GL_FRAMEBUFFER));
}

- (void)setupRenderBuffer {
	printf("render buffer\n");
    glGenRenderbuffers(1, &_colorRenderBuffer);
    glBindRenderbuffer(GL_RENDERBUFFER, _colorRenderBuffer);        
    [_context renderbufferStorage:GL_RENDERBUFFER fromDrawable:_eaglLayer];    
}

- (void)setupDepthBuffer {
	printf("depth buffer\n");
    glGenRenderbuffers(1, &_depthRenderBuffer);
    glBindRenderbuffer(GL_RENDERBUFFER, _depthRenderBuffer);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT16, self.frame.size.width, self.frame.size.height);    
}

- (void)setupFrameBuffer {    
	printf("frame buffer\n");
    glGenFramebuffers(1, &framebuffer);
    glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);   
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, _colorRenderBuffer);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, _depthRenderBuffer);
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {        
        [self setupLayer];
        [self setupContext];  
   		//[self setupDepthBuffer];
        //[self setupRenderBuffer];        
        //[self setupFrameBuffer];
		[self setup];
		[self startAnimation];
    }
    return self;
}

- (void)startAnimation
{
    if (!animating)
    {
        CADisplayLink *aDisplayLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(drawFrame)];
        [aDisplayLink setFrameInterval:animationFrameInterval];
        [aDisplayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
        self->displayLink = aDisplayLink;
        
        animating = TRUE;
    }
}

- (void)stopAnimation
{
    if (animating)
    {
        [self->displayLink invalidate];
        self->displayLink = nil;
        animating = FALSE;
    }
}

- (void)drawFrame
{
	[EAGLContext setCurrentContext:_context];
	glBindFramebuffer(GL_FRAMEBUFFER, framebuffer);
    glViewport(0, 0, framebufferWidth, framebufferHeight);
	
	if (hxgl::platform::IPlatform::instance->enterFrameCallback != NULL)
    {
        hxgl::platform::IPlatform::instance->enterFrameCallback ();
    }

    glBindRenderbuffer(GL_RENDERBUFFER, _colorRenderBuffer);

    BOOL success = [_context presentRenderbuffer:GL_RENDERBUFFER];
	printf("success %d\n", success);
	//[_context presentRenderbuffer:GL_RENDERBUFFER];
}

@end


// --- App delegate -------------------------------------------------------

@implementation HxGLAppDelegate

@synthesize window;
@synthesize glView;


#pragma mark -
#pragma mark Application lifecycle

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after application launch.
    
    CGRect screenBounds = [[UIScreen mainScreen] bounds];    
    self.glView = [[[OpenGLView alloc] initWithFrame:screenBounds] autorelease];
    [self.window addSubview:glView];
    [self.window makeKeyAndVisible];
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    /*
     Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
     Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
     */
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    /*
     Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
     If your application supports background execution, called instead of applicationWillTerminate: when the user quits.
     */
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    /*
     Called as part of  transition from the background to the inactive state: here you can undo many of the changes made on entering the background.
     */
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    /*
     Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
     */
}


- (void)applicationWillTerminate:(UIApplication *)application {
    /*
     Called when the application is about to terminate.
     See also applicationDidEnterBackground:.
     */
}


#pragma mark -
#pragma mark Memory management

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application {
    /*
     Free up as much memory as possible by purging cached data objects that can be recreated (or reloaded from disk) later.
     */
}


- (void)dealloc {
    [glView release];
    [window release];
    [super dealloc];
}


@end


namespace hxgl
{
namespace platform
{
	IPhone::IPhone()
	{
		printf("iPhone platform\n");
		HXGL_NOTIFY ("Your platform: [IPhone]. Setting up a [IPhone] environment");
		wnd = new hxgl::window::DummyWnd;
		input = wnd->getInputHandle();
		
		if (NULL != hxgl::platform::IPlatform::instance)
		{
			HXGL_ERROR ("Platform already allocated");
		}
		else
		{
			hxgl::platform::IPlatform::instance = this;
			IPhone::iphone = this;
		}
	}
	
    void IPhone::beginMain()
    {
        int argc = 0;// *_NSGetArgc();
		char **argv = 0;// *_NSGetArgv();
		
		NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
		UIApplicationMain(argc, argv, nil, @"HxGLAppDelegate");
		[pool release];
    }
	
    void IPhone::allocateGLW(unsigned char major, unsigned char minor)
    {
        if (major >= 2)
        {
			[OpenGLView setApi:kEAGLRenderingAPIOpenGLES2];
            glw = new hxgl::gw::GLES20;
            return;
        }
        if (major >= 1 && minor >= 1)
        {
			[OpenGLView setApi:kEAGLRenderingAPIOpenGLES1];
            glw = new hxgl::gw::GLES11;
            return;
        }
        else HXGL_FATAL_ERROR ("IPhone::allocateGLW(): Unable to find a suitable context");
    }
	
	IPhone::~IPhone ()
	{
		HXGL_NOTIFY ("Cleaning up [IPhone] environment");
		delete wnd;
		delete glw;
		delete input;	//FIXME Once wnd->getInputHandle instances input, remove this delete
	}
	
	IPhone *IPhone::iphone = new platform::IPhone;
}

}
}

hxgl::platform::IPhone stevejobs;
