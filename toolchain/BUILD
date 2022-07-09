load(":cc_toolchain_config.bzl", "cc_toolchain_config")

package(default_visibility = ["//visibility:public"])

#filegroup(name = "clang_suite")

cc_toolchain_suite(
    name = "clang_suite",
    toolchains = {
        "linux_x86_64": ":linux_x86_64_toolchain",
    },
)

filegroup(name = "empty")

cc_toolchain(
    name = "linux_x86_64_toolchain",
    toolchain_identifier = "linux_x86_64-toolchain",
    toolchain_config = ":linux_x86_64_toolchain_config",
    all_files = ":empty",
    compiler_files = ":empty",
    dwp_files = ":empty",
    linker_files = ":empty",
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 0,
)

#filegroup(name = "linux_x86_64_toolchain_config")

cc_toolchain_config(name = "linux_x86_64_toolchain_config")
