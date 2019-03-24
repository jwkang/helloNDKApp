LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libjw_jni
LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true

LOCAL_CPPFLAGS += -O0 -pthread -fexceptions

LOCAL_LDLIBS := -llog

LOCAL_SRC_FILES := \
	jni_common/jwJNI.cpp \
	com_app_example_jwkang2_hello_model_HTunerHal.cpp

LOCAL_C_INCLUDES := $(subst ${ANDROID}/,,$(LOCAL_C_INCLUDES))
LOCAL_C_INCLUDES += \
	$(LOCAL_PATH)/include \
	$(JNI_H_INCLUDE)

include $(BUILD_SHARED_LIBRARY)
