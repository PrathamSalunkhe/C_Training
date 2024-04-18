//this program is to understand the use of function pointers with structures

#include <stdio.h>

//defination of structure using typedef
typedef struct example
{
    char (*hello)(char);
    char (*bye)(char);
}example;

/// @brief this is fun 1
/// @param a 
/// @return returns r = t
char fun1(char a)
{
    char r = 't';
    return r;
    //printf("a : %c\n", a);
    //printf("Hello, Welcome to C Programming\n");
}

/// @brief this is fun 2
/// @param a 
/// @return return r = T
char fun2(char a)
{
    char r = 'T';
    return r;
    //printf("a : %c\n", a);
    //printf("Thank you for visiting\n");
}

int main()
{
    example call;   //structure variable
    char x, y;

    //assigning address of functions to function pointer
    call.hello = fun1;
    call.bye = fun2;
    
    printf("Enter a character: ");
    scanf("%c", &x);

    //calling t he function as per the condition
    if(x >= 'a' && x <= 'z')
    {
        y = call.hello(x);
    }
    else if (x >= 'A' && x <= 'Z')
    {
        y = call.bye(x);
    }

    //checking the return value
    if(y == 't')
    {
        printf("fun1 called, hello\n");
    }
    else if (y == 'T')
    {
        printf("fun2 called, thank you\n");
    }
    
    printf("y : %c\n", y);

    return 0;

}