package com.app.example.jwkang2.hello.model;

import com.app.example.jwkang2.hello.control.HTuningParamCable;
import com.app.example.jwkang2.hello.control.HTuningParamTer;

import org.json.JSONObject;

import java.util.HashMap;

public class HTunerHal {
    static {
        System.loadLibrary("jw_jni");
    }

    public native int nativeOpen();
    public native int nativeClose();

    // Various ways to pass Java structure to JNI

    // 1. Pass object
    public native int nativeTuenTer(int frequency, int deliveryType, HTuningParamTer tuningParamTer);
    public native int nativeTuenTer(int frequency, int deliveryType, HTuningParamCable tuningParamCable);

    // 2. Send it to map container and parse map again
    public native int nativeTuneWithJson(int frequency, int delivertType, HashMap<String, Integer> tuningParam);

    // 3.1 Pass json object
    public native int nativeTuneWithJson(int frequency, int delivertType, JSONObject tuningParam);

    // 3.2 Pass json string
    public native int nativeTuneWithJson(int frequency, int delivertType, String tuningParam);

    // 3.3 Pass json byteStream using nio
    public native int nativeTuneWithJson(int frequency, int delivertType, Byte[] tuningParam, int byteStreamType);

    // 4. Pass as string format
    public native int nativeTuneWithString(int frequency, int delivertType, String tuningParam);
}
