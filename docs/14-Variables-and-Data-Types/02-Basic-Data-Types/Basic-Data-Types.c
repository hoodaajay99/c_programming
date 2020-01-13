/* Size of Char types */ 

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