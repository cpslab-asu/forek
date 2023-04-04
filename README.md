# FoRek

**Fo**mal **Re**quirements Too**k**it is an extensible and modular library for parsing and translating Temporal Logic (TL) requirements into simple Intermediate Representations (IRs). In addition, it provides methods of walking the resulting IR and associate actions with each context.

## Getting Started

To get started, you must have CMake, a build system (e.g., ninja or make), and a C++ compiler supporting C++17 or later. With these installed, you may build the library with the following command in the root directory of the project:

```bash
cmake -B build
cmake --build build --target=forek
```

p.s., You must clone this repository with the flag `--recurse-submodules` to collect the dependencies of FoRek.

## Running Examples

To run an example located under the `examples/` folder, you must explicitly target the example of choice. For example, if you want to run the Propositional Logic example 1, then the following command should be used:

```bash
cmake --build build --target=pl_ex01
```
