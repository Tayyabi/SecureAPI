#include <jni.h>
#include <string>

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_example_secureapi_MainActivity_getFacebookApiKey(JNIEnv *env, jobject instance) {
    return env->NewStringUTF("Facebook api key here");
}

JNIEXPORT jstring JNICALL
Java_com_example_secureapi_MainActivity_getBaseApi(JNIEnv *env, jobject instance) {
    return env->NewStringUTF("Base api key here");
}

}
