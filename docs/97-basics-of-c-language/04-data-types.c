
/*
Fundamental Data Types
======================
. Specifiy type of data that they store

-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
#BEGINNER:
----------
| char      	        | 1	                            |   %c              |
| unsigned char	        | 1	                            |   %c              |

| int                   | at least 2, usually 4         |   %d              |
| unsigned int	        | at least 2, usually 4	        |   %u              |

| float	                | 4	                            |   %f              |
| double	            | 8	                            |   %lf             |

| void      	        | 4	                            |   %d, %u          |

#ADVANCED:
---------
| short int	            | 2 usually	                    |   %hd             |
| unsigned short int    | 2 usually	                    |   %hd             |

| long int	            | at least 4, usually 8	        |   %li             |
| unsigned long int	    | at least 4	                |   %lu             |

| long long int	        | at least 8	                |   %lli            |
| unsigned long long int| at least 8	                |   %llu            |

| long double	        | at least 10, usually 12 or 16	|   %Lf             |
-----------------------------------------------------------------------------
*/

/*
#BEGINNER:
Size of all Fundamental Data types 
*/

#include <stdio.h>
int main()
{
    printf("sizeof(char) = %lu bytes\n", sizeof(char));
    printf("sizeof(unsigned char) = %lu bytes\n", sizeof(unsigned char));

    printf("sizeof(int) = %lu bytes\n", sizeof(int));
    printf("sizeof(unsigned int) = %lu bytes\n", sizeof(unsigned int));

    printf("sizeof(float) = %lu bytes\n", sizeof(float));
    printf("sizeof(double) = %lu bytes\n", sizeof(double));

    printf("sizeof(void) = %lu bytes\n", sizeof(void));
 
    printf("sizeof(short) = %lu bytes\n", sizeof(short));
    printf("sizeof(unsigned short) = %lu bytes\n", sizeof(unsigned short));

    printf("sizeof(long int) = %lu bytes\n", sizeof(long int));
    printf("sizeof(unsigned long int) = %lu bytes\n", sizeof(unsigned long int));

    printf("sizeof(long long int) = %lu bytes\n", sizeof(long long int));
    printf("sizeof(unsigned long long int) = %lu bytes\n", sizeof(unsigned long long int));

    printf("sizeof(long double) = %lu bytes\n", sizeof(long double));
}

/*
#BEGINNER
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| int                   | at least 2, usually 4         |   %d              |
| unsigned short int    | 2 usually	                    |   %hu             |
-----------------------------------------------------------------------------
*/
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

/*
#BEGINNER
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| float	                | 4	                            |   %f              |
| double	            | 8	                            |   %lf             |
-----------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    float varFloat = 2.3;
    double varDouble = 6.8;

    printf("sizeof(varFloat) = %lu bytes\n", sizeof(varFloat));
    printf("sizeof(varDouble) = %lu bytes\n", sizeof(varDouble));

    printf("varFloat value = %f \n", varFloat);
    printf("varDouble value =%lf \n", varDouble);

    return 0;
}

/*
#ADVANCED
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| short int	            | 2 usually	                    |   %hd             |
| unsigned short int    | 2 usually	                    |   %hu             |
-----------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    short varShort = -32768;                 // shot int varShort
    unsigned short varUnsignedShort = 65535; // unsigned short int varUnsignedShort

    printf("sizeof(varShort) = %lu bytes\n", sizeof(varShort));
    printf("sizeof(varUnsignedShort) = %lu bytes\n", sizeof(varUnsignedShort));

    // Range: -2^15 to 2^15-1 [-32768 to 32767]
    printf("varShort Value = %hd \n", varShort);
    // Range: 0 to 2^16-1 [0 to 65535]
    printf("varUnsignedShort Value = %hu \n", varUnsignedShort);

    return 0;
}

/*
#ADVANCED
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| long int	            | at least 4, usually 8	        |   %li             |
| unsigned long int	    | at least 4	                |   %lu             |
-----------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    long int varLongInt = -32768;
    unsigned long int varUnsignedLongInt = 65535;

    printf("sizeof(varLongInt) = %lu bytes\n", sizeof(varLongInt));
    printf("sizeof(varUnsignedLongInt) = %lu bytes\n", sizeof(varUnsignedLongInt));

    // Range: -2^15 to 2^15-1 [-32768 to 32767]
    printf("varLongInt Value = %li \n", varLongInt);
    // Range: 0 to 2^16-1 [0 to 65535]
    printf("varUnsignedLongInt Value = %lu \n", varUnsignedLongInt);

    return 0;
}

/*
#ADVANCED
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| long long int	        | at least 8	                |   %lli            |
| unsigned long long int| at least 8	                |   %llu            |
-----------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    long long int varLongLongInt = -32768;
    unsigned long long int varUnsignedLongLongInt = 65535;

    printf("sizeof(varLongLongInt) = %lu bytes\n", sizeof(varLongLongInt));
    printf("sizeof(varUnsignedLongLongInt) = %lu bytes\n", sizeof(varUnsignedLongLongInt));

    // Range: -2^15 to 2^15-1 [-32768 to 32767]
    printf("varLongLongInt Value = %lli \n", varLongLongInt);
    // Range: 0 to 2^16-1 [0 to 65535]
    printf("varUnsignedLongLongInt Value = %llu \n", varUnsignedLongLongInt);

    return 0;
}

/*
#ADVANCED
-----------------------------------------------------------------------------
| Type 	                | Size (bytes)	                | Format Specifier  |
-----------------------------------------------------------------------------
| long double	        | at least 10, usually 12 or 16	|   %Lf             |
-----------------------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    long double varLongDouble = 3.4;

    printf("sizeof(varLongDouble) = %lu bytes\n", sizeof(varLongDouble));

    // Range: -2^15 to 2^15-1 [-32768 to 32767]
    printf("varLongDouble Value = %Lf \n", varLongDouble);

    return 0;
}

