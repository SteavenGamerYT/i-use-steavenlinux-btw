# I use SteavenLinux btw

> "I use SteavenLinux btw" but it's a Turing-complete programming language.

## Introduction

I use SteavenLinux btw is an esoteric programming language based on [Brainfuck](
https://en.wikipedia.org/wiki/Brainfuck) in which the commands are the following
keywords:

`i`, `use`, `steavenlinux`, `linux`, `btw`, `by`, `the`, `way`, `gentoo`.

See the [language specification](./docs/language_specification.md) for more
information.

This repository contains a [C/C++ library implementing I use SteavenLinux btw](./lib)
and a dependent [command-line interpreter](./cmd).

## Getting Started

### Prerequisites

- [CMake](https://cmake.org/) >= 3.23
- a C99 and C++17 compiler toolchain supported by CMake and providing POSIX
  [`unistd.h`](https://en.wikipedia.org/wiki/Unistd.h), `mmap()`, `MAP_ANON`,
  and defining `__x86_64__` when targeting x86-64

### Building

    $ mkdir build
    $ cd build
    $ cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON ..
    $ cmake --build .

### Installation

    # cmake --install .

### Usage

#### Command-line interpreter

    $ i-use-steavenlinux-btw <source file>

Try some of the [example I use SteavenLinux btw programs](./examples) as source files.

For details:

    $ i-use-steavenlinux-btw -h

#### C/C++ library

For documentation of the public API, see the [public headers](
./lib/include/iuab).

For example usage, see the [command-line interpreter](./cmd) and [example
libiuab programs](./examples/libiuab).

## License

This software is licensed under the [GNU General Public License, version 3](
./LICENSE.md).
