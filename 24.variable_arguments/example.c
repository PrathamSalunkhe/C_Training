//this program is to understand the variable arguments

#include <stdio.h>
#include <stdarg.h>

int fun(int, ...);

int main()
{
    fun(2,10,20);   //calling the function bby passing variable arguments
}

int fun(int Total, ...)
{
    int num,num2;

    va_list ptr;   //va_list is a type which will hold all the information about variable arguments

    //va_start must be called before accesssing variable arguments list
    va_start(ptr, Total);

    //arguments can be access one by one by using va_arg macro
    num = va_arg(ptr, int);
    num2 = va_arg(ptr, int);

    va_end(ptr);
    
    printf("%d %d\n", num, num2);
}