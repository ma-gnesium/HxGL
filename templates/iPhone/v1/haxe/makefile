SP :=
SP += 
CONFIG := $(notdir $(subst $(SP),_, $(TARGET_BUILD_DIR)))

ifeq ("$(CONFIG)","")
  CONFIG := Release-iphonesim
endif

BUILD := $(word 1,$(subst -, ,$(CONFIG)))
OS := $(word 2,$(subst -, ,$(CONFIG)))

ifeq ("$(BUILD)","Debug")
   DEBUG := -debug
endif

ifeq ("$(OS)","iphoneos")
   HAXE_OS := iphoneos
else
   HAXE_OS := iphonesim
endif


LIB_FILE := build/$(CONFIG)/IPhoneMain.$(HAXE_OS).a

ifeq ("$(ACTION)","clean")
default: clean
else
default: build-haxe
endif


export HXCPP_COMPILE_THREADS := 2

build-haxe:
	mkdir -p build/$(CONFIG)
	haxe Build.hxml -D iphone -D $(HAXE_OS) -cpp build/$(CONFIG)
	if ( !(cmp -s $(LIB_FILE) ../lib/IPhoneMain.a) ); then echo "Copy library..."; cp $(LIB_FILE) ../lib/IPhoneMain.a; fi

clean:
	rm -rf build
