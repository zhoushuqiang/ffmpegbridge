/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_cine_ffmpegbridge_FFmpegBridge */

#ifndef _Included_io_cine_ffmpegbridge_FFmpegBridge
#define _Included_io_cine_ffmpegbridge_FFMpegWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    setAVOptions
 * Signature: (Lio/cine/ffmpegbridge/FFmpegBridge/AVOptions;)V
 */
JNIEXPORT void JNICALL Java_io_cine_ffmpegbridge_FFmpegBridge_setAVOptions
  (JNIEnv *, jobject, jobject);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    prepareAVFormatContext
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_cine_ffmpegbridge_FFmpegBridge_prepareAVFormatContext
  (JNIEnv *, jobject, jstring);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    writeAVPacketFromEncodedData
 * Signature: (Ljava/nio/ByteBuffer;IIIIJ)V
 */
JNIEXPORT void JNICALL Java_io_cine_ffmpegbridge_FFmpegBridge_writeAVPacketFromEncodedData
  (JNIEnv *, jobject, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    finalizeAVFormatContext
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_io_cine_ffmpegbridge_FFmpegBridge_finalizeAVFormatContext
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class io_cine_ffmpegbridge_FFmpegBridge_AVOptions */

#ifndef _Included_io_cine_ffmpegbridge_FFmpegBridge_AVOptions
#define _Included_io_cine_ffmpegbridge_FFmpegBridge_AVOptions
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif