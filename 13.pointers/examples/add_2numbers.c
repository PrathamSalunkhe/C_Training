//tihs program is to add two numbers using pointers

int add(int *, int *);  //function declaration

#include <stdio.h>
int main()
{
    int a,b,r;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    /*p=&a;  //p stores the address of a
    q=&b;  //q stores the address of b 

    r=(*p+*q);  //r store the addition of two variables*/

    //function is called by reference
    r = add(&a, &b);  //instead of values, addresses of a and b are passed to a function

    printf("The addition of two numbers is: %d\n", r);
    return 0;
}

int add(int *p, int *q) //function receives the address of variable
{
    int c;
    c = *p + *q;
    return c;
}