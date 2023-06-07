/*
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "onnx/common/ir.h"

namespace onnx {

template <typename T>
const std::vector<T> ParseData(const Tensor* tensor);

} // namespace onnx
