---
id: Enums
title: Enums in C
sidebar_label: Enums in C
---

## Enums (Enumeration) in C / C++

- Enumeration (or enum) is a user defined data type in C.
- Enum is used to assign names to integral constants.
- Enum make a program easy to read and maintain.

## Syntax of Enums (Enumeration) in C / C++

```
enum <enum-name> 
{
    CONSTANT_1,
    CONSTANT_2,
    CONSTANT_3,
    CONSTANT_4,
    ...
} <enum-variable [optional]>;
```

Enum declaration starts with `enum` keyword, followed by `<enum-name>`. Named constants are declared in curly braces `{}` and closed with semi colon `;`.

Optional `<enum-variable>` can also be created as above.

## Declaration of Enums (Enumeration) in C / C++
```
enum week 
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};
```

Both in C and C++ programs, enum is declared using `enum` keywork, followed by enum name (optional) and the enum values.

Enum declaration in the above example creates named integer constants, which can be used in the C or C++ programs.

Please note that `#define` preprocessor directives can also be used to achived the same objective, but using `enum` is better practice.

## Using Enums
```
int main()
{
    printf("MONDAY: %d \n", MONDAY);
    printf("TUESDAY: %d \n", TUESDAY);
    printf("WEDNESDAY: %d \n", WEDNESDAY);
    printf("THURSDAY: %d \n", THURSDAY);
}
```

Enums can be used directly in a C/C++ program as named constants as shown in the above program.

OUTPUT:
```
MONDAY: 0 
TUESDAY: 1 
WEDNESDAY: 2 
THURSDAY: 3 
```

Enums are assigned incremental integer values (from the previous value) as shown below.

```
enum week 
{
    MONDAY = 5,
    TUESDAY,
    WEDNESDAY = -10,
    THURSDAY,
};
```

OUTPUT
```
MONDAY: 5 
TUESDAY: 6 
WEDNESDAY: -10 
THURSDAY: -9 
```

Here TUESDAY is assigned value 6, which is one greater than value of MONDAY and THURSDAY is assigned value 6, which is one greater than value of WEDNESDAY.

## Variables of type enum 
Variables of type enum can also be defined. They can be defined in two ways.

### Declaration of enum Variables

In both of the below cases, "day" is defined as the variable of type week. 

```
enum week
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
} day;
```
```
enum week
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};
enum week day;
```

### Using the enum Variables

```
#include <stdio.h>

enum week
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};

int main()
{
    enum week day;
    day = TUESDAY;
    printf("day is: %d \n", day);

    day = THURSDAY;
    printf("day is: %d \n", day);

    return 0;
}
```

OUTPUT:
```
day is: 1 
day is: 3 
```

## Interesting facts about initialization
- Two enum names can have same value

```
#include <stdio.h>

enum week
{
    MONDAY = 0,
    TUESDAY = 0,
    WEDNESDAY,
    THURSDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}
```

OUTPUT:
```
0, 0, 1, 2
```

- If we do not explicitly assign values to enum names, the compiler by default assigns values starting from 0.

```
#include <stdio.h>

enum week
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}
```

OUTPUT:
```
0, 1, 2, 3
```

- We can assign values to some name in any order. All unassigned names get value as value of previous name plus one.

```
#include <stdio.h>

enum week
{
    MONDAY = 5,
    TUESDAY,
    WEDNESDAY = -10,
    THURSDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}
```

OUTPUT:
```
5, 6, -10, -9
```

- The value assigned to enum names must be some integeral constant

```
#include <stdio.h>

enum week
{
    MONDAY = 1.5,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}
```

OUTPUT: Compilation Error
```
error: enumerator value for ‘MONDAY’ is not an integer constant
```

- All enum constants must be unique in their scope.

```
#include <stdio.h>

enum week
{
    MONDAY = 1.5,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
};

enum days
{
    MONDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}
```

OUTPUT: Compilation Error
```
File.c:5:5: note: previous definition of ‘MONDAY’ was here
```

## Best Practices while using Enums in C and C++
- Use enums where named integer constants are required in the program.
- Use meaningful names for enum constants, eg MONDAY, THURSDAY for week days, rather than mon, tu etc.
- Use upper case for enum constants. eg MONDAY instead of monday.
- Put the enum declaration in common header file if used across large program and multiple files.


## Enum vs Macro
We can also use macros to define named constants in a program. 

For example we can define week days - 

```
#define MONDAY (0)
#define TUESDAY (1)
#define WEDNESDAY (2)
#define THURSDAY (3)
```

### Advantages of using Enums over Macros

- Enums follow scope rules. Which means same named constants can used in different enums declared in seperate scopes.
- Enum variables can be declared and assigned enum values.
- Constants `#define` when used in arithmetic operations often cause run-time errors, which are hard to debug.
-  

### Limitations of using Enums over Macros
- Enums can defined only integer constants, where as Macros can be used to define constants for most other data types. eg `#define NUMBER (1.5)` or `#define string "1.5"`

## Exercises

### Exercise 1

Predict the output of following C program

```
#include <stdio.h>
enum week
{
    MONDAY = 0,
    TUESDAY = 4,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
};

int main()
{
    printf("Value stored in FRIDAY: %d \n", FRIDAY);
    return 0;
}
```

### Exercise 2

```
#include <stdio.h> 
enum State {WORKING = 0, FAILED, FREEZED}; 
enum State currState = 2; 
  
enum State FindState() { 
    return currState; 
} 
  
int main() { 
   (FindState() == WORKING)? printf("WORKING\n"): printf("NOT WORKING\n"); 
   return 0; 
}
```