//
// Created by weiersyuan on 2018/5/6.
//

#include "common.h"

void ThrowException(JNIEnv * env, const char* className, const char* message){
    jclass clazz = env->FindClass(className);
    if (0 != clazz) {
        env->ThrowNew(clazz, message);
        env->DeleteLocalRef(clazz);
    }
}

