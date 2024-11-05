# C Presentation

Welcome to the C Presentation! This README provides essential information about C programming, including compilation, linking, preprocessing, memory alignment, and using Valgrind for memory leak detection.

## Table of Contents
- [Compilation](#compilation)
- [Linking](#linking)
- [Preprocessor](#preprocessor)
- [Memory Alignment](#memory-alignment)
- [Using Valgrind](#using-valgrind)

## Basics of Compilation and Linking

### Compilation
Compilation is the process of converting source code written in a high-level programming language (like C) into machine code that a computer's processor can execute. The compilation process typically involves several stages:
1. **Preprocessing**: Handles preprocessor directives (e.g., `#include`, `#define`).
2. **Compilation**: Translates the preprocessed code into assembly language.
3. **Assembly**: Converts assembly code into machine code, resulting in object files (`.o` or `.obj`).

### Linking
Linking is the process of combining multiple object files and libraries into a single executable file. The linker resolves references between object files and ensures that all necessary code and data are included in the final executable. There are two types of linking:
1. **Static Linking**: Combines all code into a single executable at compile time.
2. **Dynamic Linking**: Links libraries at runtime, allowing for smaller executables and shared library usage.

### Example Workflow
1. **Compile source files to object files**:
    ```sh
    gcc -c file1.c
    gcc -c file2.c
    ```
2. **Link object files to create an executable**:
    ```sh
    gcc -o program file1.o file2.o
    ```

This process ensures that your C program is translated from human-readable code into a format that the computer can execute.

## Compilation
To compile a C program, use the `gcc` compiler:
```sh
gcc -o outputfile sourcefile.c
```

## Linking
Linking combines object files into a single executable. Use `gcc` for linking:
```sh
gcc -o executable file1.o file2.o
```

## Preprocessor
The C preprocessor processes directives before compilation. Common directives include:
- `#include` for including header files
- `#define` for defining macros
- `#ifdef` for conditional compilation

Example:
```c
#include <stdio.h>
#define PI 3.14

int main() {
    printf("Value of PI: %f\n", PI);
    return 0;
}
```

## Memory Alignment
Memory alignment ensures that data is stored in memory according to specific boundaries. This can improve performance on certain architectures.

Example:
```c
struct Aligned {
    char a;
    int b;
} __attribute__((aligned(4)));
```

## Using Valgrind
Valgrind is a tool for detecting memory leaks and other memory-related errors. To use Valgrind:
1. Compile your program with debugging information:
    ```sh
    gcc -g -o program program.c
    ```
2. Run your program with Valgrind:
    ```sh
    valgrind --leak-check=full ./program
    ```
