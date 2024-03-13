//leftshift operator

#include <stdio.h>

int main()
{
    char var = 3;     //3 = 0000 0011
    printf("%d", var<<5);   //after left shift 0110 0000 = 96
    return 0;
}