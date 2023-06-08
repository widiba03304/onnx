// Copyright (c) ONNX Project Contributors

/*
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#define ONNX_UNUSED_PARAMETER(x) (void)(x)

#define ONNX_THROW(...)                                   \
  do {                                                    \
    std::cerr << onnx::MakeString(__VA_ARGS__); \
    abort();                                              \
  } while (false)

#define ONNX_THROW_EX(ex)                \
  do {                                   \
    std::cerr << ex.what() << std::endl; \
    abort();                             \
  } while (false)

#define ONNX_TRY if (true)
#define ONNX_CATCH(x) else if (false)
#define ONNX_HANDLE_EXCEPTION(func)
