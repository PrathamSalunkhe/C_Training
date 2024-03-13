//comma operator has the least precedence

#include <stdio.h>

int main()
{
    int a;

    //as comma operator has the least precedence
    //before comma there is assignment operator
    //so 3 will be store in a
    a = 3, 4, 8;


    printf("%d\n", a);
    return 0;
}