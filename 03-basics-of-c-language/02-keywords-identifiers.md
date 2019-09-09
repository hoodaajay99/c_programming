# Keywords and Identifiers

## Keywords

```c
auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
continue	for	signed	void
do	if	static	while
default	goto	sizeof	volatile
const	float	short	unsigned
```


## Identifiers

```c
int money;
double accountBalance;
```
> Here, **money** and **accountBalance** are identifiers

#### Rules for naming identifiers:

- ALLOWED: uppercase and lowercase letters, digits and underscores.
- First character: Should be letter or underscore
- NOT_ALLOWED: keywords as identifiers or digits as first character
- Suggested to keep identifiers less than 31 characters.

# Example

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

