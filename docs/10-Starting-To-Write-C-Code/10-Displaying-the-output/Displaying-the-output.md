---
id: Displaying-the-output
title: Displaying the output
sidebar_label: Displaying the output
---

## C Program Output

In C programming, `printf()` is one of the main output function. The function sends formatted output to the screen.

### Example1: Output a String

```c
#include <stdio.h>    
int main()
{ 
    // Displays the string inside quotations
    printf("My C Programming Course");
    return 0;
}
```
__Output:__
```bash
C Programming
```

- The `printf()` is a library function that sends formatted output to the screen
- The function prints the string `My C Programming Course` inside quotations
- For `printf()` we need to include `stdio.h` header file using `#inclue <stdio.h>` statement.

### Example2: Output an integer
```c
#include <stdio.h>
int main()
{
    int varInt = 5;
    printf("Number = %d", varInt);

    return 0;
}
```
__Output:__
```bash
Number = 5
```

- `%d` here is the format specifier to print `int` types
- Here, the `%d` inside the quotations will be replaced by the value of `varInt`

### Example3: Output float and double

```c
#include <stdio.h>
int main()
{
    float varFloat = 18.5;
    double varDouble = 15.4;

    printf("varFloat = %f\n", varFloat);
    printf("varDouble = %lf", varDouble);

    return 0;
}
```

__Output:__
```bash
varFloat = 18.500000
varDouble = 15.400000
```

- To print float, we use `%f` format specifier
- To print double, we use `%lf` aka `long float` format specifier
- Both `%f` and `%lf` print six decimal places

### Example4: Output a character

```c
#include <stdio.h>
int main()
{
    char varChar = 'a';
    printf("character = %c.", varChar);

    return 0;
}
```
__Output:__
```bash
character = a
```

- To print char, we use `%c` format specifier.