cmake_minimum_required(VERSION 3.13)
project(jni)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)
include_directories(jni_common)

# for JNI =================================================================================================
# not working??
set(MY_NDK_LIB, "/Users/jwkang2/work/etc/android-ndk-r18b/platforms/android-28/arch-arm64/usr/lib")

include_directories(/Users/jwkang2/work/etc/android-ndk-r18b/sysroot/usr/include)
find_library( # Defines the name of the path variable that stores the
        # location of the NDK library.
        /Users/jwkang2/work/etc/android-ndk-r18b/platforms/android-28/arch-arm64/usr/lib

        # Specifies the name of the NDK library that
        # CMake needs to locate.
        log )
## =========================================================================================================

add_library( # Specifies the name of the library
        jw_standaloe_jni

        SHARED

        # Provides a relative path to your source file(s).
        include/com_app_example_jwkang2_hello_model_HTunerHal.h
        jni_common/jwJNI.cpp
        com_app_example_jwkang2_hello_model_HTunerHal.cpp)


