// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/H264Encoder

#ifndef org_webrtc_H264Encoder_JNI
#define org_webrtc_H264Encoder_JNI

#include <jni.h>

#include "sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_H264Encoder[];
const char kClassPath_org_webrtc_H264Encoder[] = "org/webrtc/H264Encoder";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_H264Encoder_clazz(nullptr);
#ifndef org_webrtc_H264Encoder_clazz_defined
#define org_webrtc_H264Encoder_clazz_defined
inline jclass org_webrtc_H264Encoder_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_H264Encoder,
      &g_org_webrtc_H264Encoder_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_H264Encoder_CreateEncoder(JNIEnv* env);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_H264Encoder_nativeCreateEncoder(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_H264Encoder_CreateEncoder(env);
}

static jboolean JNI_H264Encoder_IsSupported(JNIEnv* env);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_H264Encoder_nativeIsSupported(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_H264Encoder_IsSupported(env);
}


}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_H264Encoder_JNI
