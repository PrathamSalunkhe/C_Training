//this program is to understand the undef preprocessor directive

#include <stdio.h>

#define NUMBER 100

int main()
{
    printf("The number defined is: %d\n", NUMBER);

    //undefining the number
    #undef NUMBER

    //redefining the number
    #define NUMBER 420

    printf("After undef and redefining, the number is: %d\n", NUMBER);

    return 0;
}