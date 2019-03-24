# helloNDK

### You can choice one build tool 
- pdk build using Android.mk, Application.mk
    - You can build with the command ndk-build (Android gradle build is set with these build command)
- ndk standalone build using cmake

### Pre-requirement
- if you want to use the ndk standaloe build, you need to download and set the related variable for
  path ndk-tools. Reference CMakeLists.txt in jni folder

### About Cross-compile
- You need to change compile tool by yourself if you want to use cross compile. 

