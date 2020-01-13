---
id: Basic-Data-Types
title: Basic Data Types
sidebar_label: Basic Data Types
---

## Basic Types (Also called Primary/Built-in)

| Basic Data Type | Description |
| -- | -- |
| char | `char` is the most basic data type, stores a single char value and requires a single byte (8 bits) to store in memory |
| int | `int` stores integer values and requires 4 bytes (32 bits) to store in  memory |
| float | `float` used to store decimal numbers with single precision and requires 4 bytes byte (32 bits) to store in memory |
| double | `double` used to store decimal numbers with double precision and requires 8 bytes byte (64 bits) to store in memory |


## Basic Types variants, ranges and MEMORY

Basic data types has many variants based on range of data stored, whether signed  unsigned and memory requirement. These properties may vary from compiler to compiler. 

Below is list of ranges along with the memory requirement and format specifiers on 32 bit gcc compiler.

### char types

| DATA TYPE	| MEMORY (BYTES) | RANGE | FORMAT SPECIFIER |
|:--:|:--:|:--:|:--:|
| signed char | 1 | -128 to 127 | %c |
| unsigned char | 1 | 0 to 255 | %c |

### Size of char types

We can use the sizeof() operator to check the size of a variable or size of a type as shown below:




### int types

| DATA TYPE	| MEMORY (BYTES) | RANGE | FORMAT SPECIFIER |
|:--:|:--:|:--:|:--:|
| short int | 2 | -32,768 to 32,767 | %hd |
| unsigned short int | 2 | 0 to 65,535 | %hd |
| | | |
| int | 4 | -(2^31) to (2^31)-1 | %d |
| unsigned int | 4 | 0 to (2^32)-1 | %u |
| | | |
| long int | 4 | -(2^31) to (2^31)-1 | %ld |
| unsigned long int | 4 | 0 to (2^32)-1 | %lu |
| | | |
| long long int | 8 | -(2^63) to (2^63)-1 | %ld |
| unsigned long long int | 8 | 0 to (2^64)-1 | %lu |


### float and double types

| DATA TYPE	| MEMORY (BYTES) | RANGE | FORMAT SPECIFIER |
|:--:|:--:|:--:|:--:|
| | | |
| float | 4 | | %f |
| double | 8 | | %lf |
| long double | 16 | | %Lf |


## Checking Size Of Basic types "sizeof() operator"

We can use the sizeof() operator to check the size of a variable or size of a type as shown below:

```c
#include <stdio.h>
int main()
{
    char varChar = 'A';
    unsigned char varUnsignedChar = 'B';

    printf("sizeof(varChar) = %lu bytes\n", sizeof(varChar));
    printf("sizeof(varUnsignedChar) = %lu bytes\n", sizeof(varUnsignedChar));

    // Range: -128 to 127
    printf("varChar value = %c \n", varChar);
    // Range: 0 to 256
    printf("varUnsignedChar value =%c \n", varUnsignedChar);

    return 0;
}
```