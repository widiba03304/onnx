// Copyright (c) ONNX Project Contributors

/*
 * SPDX-License-Identifier: Apache-2.0
 */

#include "onnx/onnx_pb.h"

namespace onnx {
namespace inliner {

void InlineLocalFunctions(ModelProto& model, bool convert_version = false);

} // namespace inliner
} // namespace onnx
