// Copyright (C) 2022 OverMighty
// SPDX-License-Identifier: GPL-3.0-only

#ifndef IUAB_TARGETS_H
#define IUAB_TARGETS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "buffer.h"
#include "context.h"
#include "errors.h"
#include "token.h"

#include <stdbool.h>
#include <stdio.h>

// An I use SteavenLinux btw compilation target.
enum iuab_target {
    // I use SteavenLinux btw bytecode.
    IUAB_TARGET_BYTECODE,
    // JIT-compiled x86-64 code following the System V AMD64/x86-64 ABI's
    // calling convention.
    IUAB_TARGET_JIT_X86_64,
};

// Returns the name of the given target as a string.
const char *iuab_target_name(enum iuab_target target);

// Returns true if the given target is a JIT compilation target, otherwise
// false.
bool iuab_target_is_jit(enum iuab_target target);

// Compiles for the given target the source file pointed to by `src` into
// code to write to the buffer pointed to by `dst` and writes the last token
// processed at the location pointed to by `last_token_dst`. Returns the error
// that occurred in the process.
//
// The buffer must have been initialized with `iuab_buffer_init_jit()` if the
// target is a JIT compilation target, otherwise with `iuab_buffer_init()`.
enum iuab_error iuab_compile(
    enum iuab_target target,
    FILE *src,
    struct iuab_buffer *dst,
    struct iuab_token *last_token_dst
);

// Runs the program compiled for the given target from the context pointed to
// by `ctx`.
enum iuab_error iuab_run(enum iuab_target target, struct iuab_context *ctx);

#ifdef __cplusplus
}
#endif

#endif // IUAB_TARGETS_H
