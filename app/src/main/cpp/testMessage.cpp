#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_roy_opencvtest_MainActivity_getTestString (
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "測試";
    return env->NewStringUTF(hello.c_str());
}
