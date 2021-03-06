#include <jni.h>
#include <string>
#include <year.hpp>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_kwrp_planner_1gui_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "1";

    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL Java_com_kwrp_planner_1gui_MainActivity_testJNI(
        JNIEnv *env,
        jobject /* this */) {
    Year year("29/10/1991");
    std::string date = year.getDate();
    return env->NewStringUTF(date.c_str());
}