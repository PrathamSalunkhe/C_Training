//this program is to understand the use of function pointers with structures

#include <stdio.h>


typedef struct example
{
    char (*hello)(char);
    char (*bye)(char);
}example;

char fun1(char a)
{
    char r = 't';
    return r;
    //printf("a : %c\n", a);
    //printf("Hello, Welcome to C Programming\n");
}

char fun2(char a)
{
    char r = 'T';
    return r;
    //printf("a : %c\n", a);
    //printf("Thank you for visiting\n");
}

int main()
{
    example call;
    char x, y;

    call.hello = fun1;
    call.bye = fun2;
    
    printf("Enter a character: ");
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z')
    {
        y = call.hello(x);
    }
    else if (x >= 'A' && x <= 'Z')
    {
        y = call.bye(x);
    }

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