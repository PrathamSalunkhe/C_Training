//problem based on the function

#include <stdio.h>

void f1(int, int);       //function1 declaration
void f2(int *, int *);   //function2 declaration

int main()
{
    int a=4, b=5, c=6;
    f1(a,b);           //function1 calling by value
    f2(&b, &c);       //function2 calling by referance
    printf("%d\n", c-a-b);  //as *a=&b=5 and *b=&c=6 then c=*a=5, b=*a=*b=6 c=*b=c=5
    return 0;               //so new values are a=4, b=6, c=5 -> 5-4-6 = -5
}

void f1(int a, int b)   //function1 defination
{
    int c;
    c=a, a=b, b=c;
}

void f2(int *a, int *b)  //function2 defination
{
    int c;
    c=*a, *a=*b, *b=c;
}