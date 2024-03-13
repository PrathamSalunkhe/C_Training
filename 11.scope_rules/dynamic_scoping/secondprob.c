#include <stdio.h>

a = 3;

void n(x)
{
    x = x * a;
    printf(x);
}

void m(y)
{
    a = 1;
    a = y - a;
    n(a);
    printf(a);
}

void main()
{
    m(a);
}