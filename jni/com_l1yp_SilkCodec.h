/* DO NOT EDIT THIS FILE - it is machine generated */
#if defined(_WIN32) || defined(_WIN64)
// Windows系统
#include "win32/jni.h"
#elif defined(__linux__)
#include "linux/jni.h"
#elif defined(__APPLE__)
    #include "linux/jni.h"
#else
    #error "Unsupported operating system"
#endif
/* Header for class com_l1yp_SilkCodec */

#ifndef _Included_com_l1yp_SilkCodec
#define _Included_com_l1yp_SilkCodec
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_l1yp_SilkCodec
 * Method:    nativeDecodeSilk
 * Signature: ([BLjava/io/OutputStream;I)I
 */
JNIEXPORT jint JNICALL Java_com_l1yp_SilkCodec_nativeDecodeSilk
  (JNIEnv *, jobject, jbyteArray, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
