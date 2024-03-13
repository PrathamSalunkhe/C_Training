//this program is to print the pointer value

#include <stdio.h>
int main()
{
    int x = 10,y = 30, *p, *q;
    p = &x;
    q = &y;
    printf("The address of x is: %p\n", &x);
    printf("The address of y is: %p\n", &y);
    p = q;
    printf("The address stores in p is: %p\n", p);
    printf("The address stored in q is: %p\n", q);
    //printf("%d %d", *p, *q);
    printf("The value of x and y is: %d, %d\n",x,y);
    printf("The value stored in p and q is: %d, %d\n", *p, *q);

    /*int a = 23, *p;
    p = &a;

    printf("The address of a is: %d\n", &a);

    printf("The value p points to is: %d\n", *p);
    printf("The address of p is: %d\n", p);*/
}