---
id: Very-Basic-C-Program
title: Very Basic C Program
sidebar_label: Very Basic C Program
---

Following is a very basic C Program. 

## Basic C Program consists of following

### Preprocessor Commands
- Header file include: `#include <stdio.h>`
- It tells a C compiler to include `stdio.h` file before compilation
### Functions
- `int main() {}`
- It is the main entry point of a program, where the program execution begins.
### Variables
- `char var[] = "world";`
- Variables provide means to organize data in the program
### Statements & Expressions
- `printf("Hello %s\n", var);`
### Comments
- Single Line: `// Single line commennt`
- Multi Line: `/* Multi Line Comment */`
- Comments are ignored by the compiler
- Used to add additional information in the program

```c
// Include Header files
#include "stdio.h" //printf, scanf etc

// Start of C application 
int main() 
{
    char var[] = "world";
    // Print to Console/Terminal
    printf("Hello %s\n", var);

    // Return Success
    return 0;
}
```