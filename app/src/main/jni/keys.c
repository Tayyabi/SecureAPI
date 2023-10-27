#include <jni.h>
JNIEXPORT jstring JNICALL
Java_com_example_secureapi_MainActivity_getFacebookApiKey(JNIEnv *env, jobject instance) {
 return (*env)->  NewStringUTF(env, "Facebook api key here");
}
JNIEXPORT jstring JNICALL
Java_com_example_secureapi_MainActivity_getBaseApi(JNIEnv *env, jobject instance) {
 return (*env)->NewStringUTF(env, "Base api key here");
}
