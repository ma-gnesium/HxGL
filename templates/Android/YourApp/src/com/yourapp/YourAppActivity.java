package com.yourapp;

import android.app.ActivityManager;

import android.app.Activity;
import android.opengl.GLSurfaceView;
import android.os.Bundle;
import android.content.pm.ConfigurationInfo;
import android.content.Context;
import android.util.Log;

public class YourAppActivity extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
       
        
        System.loadLibrary("std");
        System.loadLibrary("zlib");
        System.loadLibrary("regexp");
        System.loadLibrary("hxgl"); 
        System.loadLibrary("Main");          
        
        GLSurfaceView view = new GLSurfaceView(this);
        setContentView(view);
        view.setRenderer(new OpenGLRenderer());
        view.invalidate();
        
        
        String glString = getGLVersion();
        int major = Integer.parseInt(glString.substring(0, 1));
        //int minor = Integer.parseInt(glString.substring(2, 3));
        com.hxgl.HXGL.giveVersion(major);
        Log.e ("GLINFO", getGLVersion()+"");
        
        org.haxe.HXCPP.run("Main");
        
        
    }
    
    private String getGLVersion() 
    {
    	ActivityManager am = (ActivityManager) getSystemService(Context.ACTIVITY_SERVICE);
    	ConfigurationInfo info = am.getDeviceConfigurationInfo();
    	return info.getGlEsVersion();
    }
}
