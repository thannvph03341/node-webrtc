/* Copyright (c) 2019 The node-webrtc project authors. All rights reserved.
 *
 * Use of this source code is governed by a BSD-style license that can be found
 * in the LICENSE.md file in the root of the source tree. All contributing
 * project authors may be found in the AUTHORS file in the root of the source
 * tree.
 */
#pragma once

#include <nan.h>
#include <v8.h>

#include "src/functional/validation.h"

namespace node_webrtc {


class I420Helpers {
 public:
  static void Init(v8::Handle<v8::Object> exports);

 private:
  static NAN_METHOD(I420ToRgba);
  static NAN_METHOD(RgbaToI420);
};

}  // namespace node_webrtc
