//
// Created by 11721 on 2020/9/24.
//

#ifndef NDKDEMO_STUDENT_H
#define NDKDEMO_STUDENT_H

#endif //NDKDEMO_STUDENT_H

class Student {
public:
    Student(JNIEnv* env);
    jstring getName(JNIEnv* env);

private:
    jmethodID getMethodCJ;
    jobject object;
};
