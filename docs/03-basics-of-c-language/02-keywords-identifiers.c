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

