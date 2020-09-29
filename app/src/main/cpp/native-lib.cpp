#include <jni.h>
#include <string>
#include "Student.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    Student student(env);

    jstring  hello = student.getName(env);
//    std::string hello = reinterpret_cast<const char *>(student.getName(env));
//    return env->NewStringUTF(hello.c_str());
    return hello;
}
