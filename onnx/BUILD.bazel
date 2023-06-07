load("@rules_proto//proto:defs.bzl", "proto_library")

package(
    default_visibility = ["//visibility:public"],
    licenses = ["notice"],  # Apache 2.0
)

proto_library(
    name = "onnx_proto",
    srcs = [
        "onnx.proto",
        "onnx-operators.proto",
        "onnx-data.proto",
    ],
)

cc_proto_library(
    name = "onnx_cc_proto",
    deps = [":onnx_proto"],
)

cc_library(
    name = "onnx",
    hdrs = glob(["**/*.h"]),
    srcs = glob(["**/*.cc"]),
    deps = [":onnx_cc_proto"],
)
