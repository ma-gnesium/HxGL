#ifndef LOG_H
#define LOG_H

#ifdef ANDROID
#include <android/log.h>
    #define HXGL_FATAL_ERROR(e) __android_log_print(ANDROID_LOG_INFO, "Error(Fatal)", e);
    #define HXGL_ERROR(e) __android_log_print(ANDROID_LOG_INFO, "Error", e);
    #define HXGL_WARNING(e) __android_log_print(ANDROID_LOG_INFO, "Warning", e);
    #define HXGL_NOTIFY(e) __android_log_print(ANDROID_LOG_INFO, "Info", e);
#elif IPHONE
    #define HXGL_FATAL_ERROR(e) {}
    #define HXGL_ERROR(e) {}
    #define HXGL_WARNING(e) {}
    #define HXGL_NOTIFY(e) {}
#else
    #include <iostream>
    #define HXGL_FATAL_ERROR(e) { std::cerr << "Error(Fatal): " << e << std::endl; exit(0);}
    #define HXGL_ERROR(e) std::cerr << "Error: " << e << std::endl;
    #define HXGL_WARNING(e) std::cout << "Warning: " << e << std::endl;
    #define HXGL_NOTIFY(e) std::cout << e << std::endl;
#endif

#endif //LOG_H
