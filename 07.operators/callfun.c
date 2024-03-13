//program based on calling the function
//precedence and associativity of operators

#include <stdio.h>
int fun1();       //fun1 is declared
int fun2();       //fun2 is declared

int main()
{
    int a;
    a = fun1() + fun2();    //fun1 and fun2 called
    printf("%d\n", a);
    return 0;
}


int fun1()         //fun1 defined
{
    printf("Nesso");
    return 1;        //1 returned in fun1
}

int fun2()        //fun2 defined
{
    printf("Academy");
    return 1;          //1 returned in fun2 
}