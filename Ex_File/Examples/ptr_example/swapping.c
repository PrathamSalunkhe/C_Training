//this program is to swap two numbers using pointer
#include <stdio.h>

int main()
{
    int a,b, *p,*q,r;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p=&a;
    q=&b;
    printf("Before swapping, a = %d, b = %d\n", *p, *q);

    r = *p;
    *p = *q;
    *q = r;

    printf("After swapping, a = %d, b = %d\n", *p,*q); 
}