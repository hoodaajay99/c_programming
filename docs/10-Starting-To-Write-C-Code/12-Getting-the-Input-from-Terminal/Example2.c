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