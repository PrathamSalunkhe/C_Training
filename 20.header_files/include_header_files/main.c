//this program is to understand the header files

#include <stdio.h>
#include "header.h"

int main()
{
    int a, p;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The value of a is: %d\n", a);

    p = edit(a);

    printf("The value of p is: %d\n", p);

    return 0;
}