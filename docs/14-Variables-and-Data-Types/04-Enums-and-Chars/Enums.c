
/*
    Declare and Use Enums 
*/

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
    printf("MONDAY: %d \n", MONDAY);
    printf("TUESDAY: %d \n", TUESDAY);
    printf("WEDNESDAY: %d \n", WEDNESDAY);
    printf("THURSDAY: %d \n", THURSDAY);

    return 0;
}

/*
    Variables of type Enum
*/

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

/*
    enums with same value
*/

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

/*
    Only integer values can be assigned
*/
#include <stdio.h>

enum week
{
    MONDAY = 1.5,
    TUESDAY = 0,
    WEDNESDAY,
    THURSDAY,
};

int main()
{
    printf("%d, %d, %d, %d \n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY);
    return 0;
}

