---
id: Program-Flow
title: Program Flow
sidebar_label: Program Flow
---

![Program Flow](assets/doc-image-program-flow.png)

## Three Steps Process
1. Edit/Write Code
2. Build Program
3. Run Program

## Edit/Write Code
- Used: Editor/IDE
- Generate source files
- Output: .c and .h files

## Build Program

### Preprocess source files
- Used: Preprocessor
- Include header files and replace symbols
- Input: .c and .h files
- Output: .i files

### Compile Code
- Used: Compiler
- Input: .i files
- Output: .s, .obj, .o files

### Link Object Files
- Used: Linker
- Input: .obj, .o files, Static Libs (.lib, .a)
- Output: Executable Code (.exe, a.out)

## Run Program

### Load Program into Memory
- Used: Loader
- Input: Executable Code (.exe, a.out)
- Input: Shared Libs (.dll, .so)
- Output: Program loaded into Memory

### Execute the program
- Used: CPU (Program Runs)
- Input: User/File/Network etc
- Input: Program functionality

## Example

```shell
$ gcc -save-temps <source-file.c>

$ gcc -save-temps <program-flow.c>
```

```c
// Include Header files
#include "stdio.h" //printf, scanf etc

// Start of C application 
int main() 
{
    // Print to Console/Terminal
    printf("Hello World\n");

    // Return Success
    return 0;
}
```