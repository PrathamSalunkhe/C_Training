//problem on comma operator

#include <stdio.h>

int main()

{
    int var;
    int num;

    //here first 15 will stored in var
    //after var+35 will perform 15+35 = 50
    //then the 50 will stored in num
    num = (var = 15, var+35);

    //num will be printed
    printf("%d\n", num);
    return 0;
}