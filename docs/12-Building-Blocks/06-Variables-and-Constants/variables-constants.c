
/*
Variables
*/

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

/*
    Declaration: Only name specified
    Definition: value assigned; Memory allocated
*/

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


/*
Literals
*/

#include "stdio.h"
int main() 
{
    char myName[] = "Ajay";
    //"Ajay" = "Vijay";

    printf("myName = %s \n", myName);
  
}

/*
Constants
=========
#GOOD_CODING_PRACTICE: Use constant variable names as UPPERCASE 

*/

#include "stdio.h"
int main() 
{
    const double PI = 3.14;  // #GOOD_CODING_PRACTICE
    
    printf("PI = %f\n", PI);

    //PI = 40;
    //printf("PI: %d\n", PI);

    return 0;
}







