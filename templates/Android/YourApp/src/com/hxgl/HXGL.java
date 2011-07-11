package com.hxgl;

public class HXGL {
	static boolean mInit = false;

    static public void run(String inClassName) {
        
        if (!mInit)
        {
           System.loadLibrary(inClassName);
           mInit = true;
          
        }
        onEnterFrame();
    }
    
    static public void giveVersion (int version)
    {
    	setVersion (version);    	
    }
   
    public static native void onEnterFrame(); 
    public static native void setVersion (int version);
}
