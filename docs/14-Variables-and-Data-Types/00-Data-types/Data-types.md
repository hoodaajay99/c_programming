---
id: Data-types
title: Data types
sidebar_label: Data types
---

Data Type means "type of data" an entity/item can hold. Data types in c refer to an extensive system used for declaring variables or functions of different types.

Data type of an item determine:
- The Value it can Store
- How much space it occupies in Memory
- How the Stored value in Memory is interpreted (Signed/Unsigned)

C Data Types are used to:
- Identify the type of a variable when it declared.
- Identify the type of the return value of a function.
- Identify the type of a parameter expected by a function.


## What is a Data Type ?
- Data Type means "type of data" an entity/item can hold. Each variable in C and C++ has an associated data type. Data Type used for declaring variables or functions of different types.

### Data type of an item/variable determine
- The Value it can Store
- How much space it occupies in Memory
- How the Stored value in Memory is interpreted (Signed/Unsigned)
- What Operations can be performed on the item.

### C Data Types are used to
- Identify the type of a variable when it declared.
- Identify the type of the return value of a function.
- Identify the type of a parameter expected by a function.

### Example

`unsigned int temperature;` Defines that - 


- Variable temperature is of type `integer` 
- Can store integer values like `10, 40, 80` etc
- Requires 32 bits of memory to store (sizeof operator)
- Arithmatic operations `+, -, *, /, %` can be performed

## Data Types in C

The types in C can be classified as follows:

| Types | Description |
|--|--|
| Basic Types | They are arithmetic types and are further classified into char, int, float and double
| Enumerated types | Enums are used to define named constants of type integer |
| The `void` Type | Special type that indicates no value is available |
| Derived types | Derived from Basic Types and include Pointer types, Array types, Structure types, Union types and Function types |

## Examples

```
// char type
char letter = 'a';

// int types
int number = -10;
unsigned int number1 = 50;

// float and double
float val = -1.5;
double val1 = 1.5;

// Pointer types
int val2 = 10;
int *p = &val2;

// Array types
int array[3] = {1, 5, 8};

// Structure types
struct name {
    char first [50];
    char last [50];
};

// Union types
struct name1 {
    union {
        char first [50];
        char last [50];
    } name;
};

// Function types
void printName(char *name);

```