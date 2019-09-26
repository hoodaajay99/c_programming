---
id: Run-your-first-program
title: Run your first program
sidebar_label: Run First program
---

## Hello World Program

```c
// Include Header files
#include "stdio.h" //printf, scanf etc

// Start of C application 
int main() 
{
    // Print to Console/Terminal
    printf("Hello, World\n");

    // Return Success
    return 0;
}
```

## Running Hello World Program

Following main steps are involved

### Compile the program

```bash
$ gcc hello-world.c -o hello-world
```
`hello-world` executable file gets generated

### Run the program

```bash
$ ./hello-world 
Hello, World

```
`Hello, World` is the output of program.
