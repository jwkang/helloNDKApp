/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_app_example_jwkang2_hello_model_HTunerHal */

#ifndef _Included_com_app_example_jwkang2_hello_model_HTunerHal
#define _Included_com_app_example_jwkang2_hello_model_HTunerHal
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeOpen
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeOpen
  (JNIEnv *, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeClose
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeClose
  (JNIEnv *, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuenTer
 * Signature: (IILcom/app/example/jwkang2/hello/control/HTuningParamTer;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuenTer__IILcom_app_example_jwkang2_hello_control_HTuningParamTer_2
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuenTer`
 * Signature: (IILcom/app/example/jwkang2/hello/control/HTuningParamCable;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuenTer__IILcom_app_example_jwkang2_hello_control_HTuningParamCable_2
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuneWithJson
 * Signature: (IILjava/util/HashMap;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuneWithJson__IILjava_util_HashMap_2
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuneWithJson
 * Signature: (IILorg/json/JSONObject;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuneWithJson__IILorg_json_JSONObject_2
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuneWithJson
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuneWithJson__IILjava_lang_String_2
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuneWithJson
 * Signature: (II[Ljava/lang/Byte;I)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuneWithJson__II_3Ljava_lang_Byte_2I
  (JNIEnv *, jobject, jint, jint, jobjectArray, jint);

/*
 * Class:     com_app_example_jwkang2_hello_model_HTunerHal
 * Method:    nativeTuneWithString
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_app_example_jwkang2_hello_model_HTunerHal_nativeTuneWithString
  (JNIEnv *, jobject, jint, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif