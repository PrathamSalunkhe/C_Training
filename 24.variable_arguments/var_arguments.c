//this program is to understand the variable arguments

#include <stdarg.h>
#include <stdio.h>
 
int average(int num, ...)
{
    va_list valist;
 
    int sum = 0, i;
 
    va_start(valist, num);
    for (i = 0; i < num; i++) 
        sum += va_arg(valist, int);
 
    va_end(valist);
 
    return sum / num;
}

int main()
{
    printf("Average of {3, 4} = %d\n", average(2, 3, 4));
    printf("Average of {5, 10, 15} = %d\n", average(3, 5, 10, 15));
    return 0;
}