
/*
    . return value informs the system of program success/failure
    . Compiler dependent
    . #GOOD_PRACTICE: avoid "void" return type in main
*/
#include <stdio.h>
void main() 
{ 
    printf("void main() \n");
    // no return 
} 

/*
    . #GOOD_PRACTICE: Use explicit return status in main
*/
#include <stdio.h>
int main()
{ 
    printf("int main() with return \n");
    return 0;
}

/*
    . #GOOD_PRACTICE: Make main arguments explicit 
*/
#include <stdio.h>
int main(void)
{
    printf("main with void arguments \n");
    return 0;
}

#include <stdio.h>
int main(int argc, char* argv[])
{
    printf("main with arguments \n");
    return 0;
}

/*
    #EXCERCISE: Predict the output of following C programs
*/
#include <stdio.h> 
int main() 
{ 
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(10);
    }
    return 0;
}

#include <stdio.h> 
int main(void) 
{ 
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(10); 
    }
    return 0;
} 




