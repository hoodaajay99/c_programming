---
id: Getting-the-Input-from-Terminal
title: Getting the Input from Terminal
sidebar_label: Getting Input
---

## Getting Input in C Program

In C programming `scanf()` is one of the commonly used function to take input from the user. The `scanf()` function reads formatted input from the standard input such as keyboards.

### Example1: Integer Input

```c
#include <stdio.h>
int main()
{
    int myInteger;

    printf("Enter integer value: ");
    scanf("%d", &myInteger);  

    printf("myInteger = %d \n", myInteger);
    return 0;
}
```

__Output:__
```bash
Enter integer value: 10
myInteger = 10 
```

- We use `%d` format specifier inside `scanf()` to take `int` input from user
- Notice, that we have used `&myInteger` inside scanf(). 
- Using `&myInteger` gets the address of `myInteger`. 
- The value entered by the user is stored in that address.

### Example2: Float and Double Input

```c
// Float and Double Input

#include <stdio.h>
int main()
{
    float myFloat;
    double myDouble;

    printf("Enter a float number: ");
    scanf("%f", &myFloat);

    printf("Enter a double number: ");
    scanf("%lf", &myDouble);

    printf("myFloat = %f \n", myFloat);
    printf("myFloat = %lf \n", myDouble);

    return 0;
}
```
__Output:__

```bash
Enter a float number: 10.1
Enter a double number: 11.2
myFloat = 10.100000
myFloat = 11.200000
```

- We use `%f` and `%lf` format specifier for `float` and `double` respectively

### Example3: Character Input

```c
// Character Input

#include <stdio.h>
int main()
{
    char myChar;

    printf("Enter a character: ");
    scanf("%c",&myChar);

    printf("You entered: %c \n", myChar);  

    return 0;
} 
```
__Output:__

```bash
Enter a character: a
You entered: a 
```

- When a character is entered by the user in the above program, the character itself is not stored. Instead, an integer value `(ASCII value)` is stored.
- When we display that value using `%c` text format, the entered `character` is displayed.
- If we use `%d` to display the character, it's `ASCII value` is printed.