//
// Created by 11721 on 2020/9/24.
//

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Student.h"
Student::Student(JNIEnv* env){
    std::string path = "com/example/ndkdemo/Student";
    jclass cls = env->FindClass(path.c_str());

    jmethodID student1 = env ->GetMethodID(cls,"<init>","()V");

    object = env->NewObject(cls,student1);
//    std::string methodName = "getName";
    getMethodCJ = env->GetMethodID(cls,"getName","(Ljava/lang/String;)Ljava/lang/String;");
//    object = env ->AllocObject(cls);

}
jstring Student::getName(JNIEnv* env) {

    std::string temp = "I am from C";
    jstring str = env->NewStringUTF(temp.c_str());
    jstring nameStr = (jstring)env->CallObjectMethod(object,getMethodCJ,str);
    return nameStr;
}