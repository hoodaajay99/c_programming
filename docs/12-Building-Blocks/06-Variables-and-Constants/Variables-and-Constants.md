---
id: Variables-and-Constants
title: Variables and Constants
sidebar_label: Variables and Constants
---


## Variables

- Container (storage area) to hold data
- Value of a variable can be changed

### Rules for variable Names
-  ALLOWED: uppercase and lowercase letters, digits and underscores.
- First character: letter or underscore
- NOT_ALLOWED: keywords as variable names or digits as first character
- Suggested to keep variable names less than 31 characters.

```c
#include "stdio.h"
int main() 
{
    int myage = 30; // lowercase
    int MYAGE = 40; // uppercase
    int myAge = 50; // camel case - preferred
    int my_age = 60; // with underscore = preferred
    int __my_age = 70; // start with underscore

    //int continue = 30; // lowercase
    //int 10myAge = 50; // camel case - preferred    

    printf("myage: %d\n", myage);
    printf("MYAGE: %d\n", MYAGE);
    printf("myAge: %d\n", myAge);
    printf("my_age: %d\n", my_age);
    printf("__my_age: %d\n", __my_age);

    return 0;
}
```

## Variable Declaration and Definition

### Declaration 
- Only name specified


### Definition
- value is assigned 
- Memory allocated

### Example

```c
#include "stdio.h"
int main()
{
    int myAge; // Declaration
    char myName[] = "Ajay"; // Definition

    printf("myName: %s, myAge: %d\n", myName, myAge);

    myAge = 40; // Value assigned; Memory allocated

    printf("myName: %s, myAge: %d\n", myName, myAge);

    return 0;
}
```


## Literals

- Literal is a value (or an identifier) whose **value cannot be altered** in a program.

### Integers Literals: 

```
**Decimal:** 0, -9, 22 etc
**Octal:** 021, 077, 033 etc
**Hexadecimal:** 0x7f, 0x2a, 0x521 etc
```

### Floating-point Literals

```
-2.0
0.0000234
-0.22E-5
```

### Character Literals

```
'a', 'm', 'F', '2', '}'
```

### Escape Sequence Literals:

```
\b	Backspace
\f	Form feed
\n	Newline
\r	Return
\t	Horizontal tab
\v	Vertical tab
\\	Backslash
\'	Single quotation mark
\"	Double quotation mark
\?	Question mark
\0	Null character
```

### String Literals

```
"good"                  //string constant
""                      //null string constant
"      "                //string constant of six white space
"x"                     //string constant having a single character.
"Earth is round\n"      //prints string with a newline
```

### Example
```c
#include "stdio.h"
int main() 
{
    char myName[] = "Ajay";
    //"Ajay" = "Vijay";

    printf("myName = %s \n", myName);
  
}
```

## Constants
- Variables whose value can not change.
- "const" keyword

> **GOOD_CODING_PRACTICE:** Use constant variable names as UPPERCASE

### Example

```c
#include "stdio.h"
int main() 
{
    const double PI = 3.14;  // **#GOOD_CODING_PRACTICE**
    
    printf("PI = %f\n", PI);

    //PI = 40;
    //printf("PI: %d\n", PI);

    return 0;
}
```