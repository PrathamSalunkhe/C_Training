//problem based on sizeof operator

#include <stdio.h>

int main()
{
    int i = 5;

    //acc. to c99 std. the constant operand will not get evaluated
    //sizeof i will not incremented in the (i++)
    //sizeof i will stored in var 

    int var = sizeof(i++);   //sizeof i is 4
    printf("%d %d\n", i, var);
    return 0;
}