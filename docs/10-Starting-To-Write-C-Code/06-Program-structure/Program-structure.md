---
id: Program-structure
title: Program structure
sidebar_label: Program structure
---

## Hello World

```c
// Include Header files
#include "stdio.h" //printf, scanf etc

/* Start of C application */ 
int main() 
{
    // Print to Console/Terminal
    printf("Hello, World\n");

    // Return Success
    return 0;
}
```

## Program structure

### #include <stdio.h>
`#include <stdio.h>` is a preprocessor command which tells the C compiler to include `stdio.h` file before compiling the program.

`printf` function in our program is defined in `stdio.h`.

Without `#include <stdio.h>` compiler will give warning

```bash
hello-world.c: In function ‘main’:
hello-world.c:5:4: warning: incompatible implicit declaration of built-in function ‘printf’ [enabled by default]
    printf("Hello, World! \n");
    ^
```

### int main()

`int main()` is the main function where the program execution begins.

### Comments

- `//` and `/* ... */` are comments, which are ignored by the compiler.

### printf(...) 

printf(...) is a function available in `stdio.h` header file which prints "Hello, World!" on the screen.

### return 0; statement

__Terminates__ the `main()` function and returns the value 0
