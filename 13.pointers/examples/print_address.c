//program to print the address of a variable
#include <stdio.h>

int main()
{
    int i = 10, *p = &i;

    //to print the memory address in the program use format specifier (%p)
    printf("The address of the variable i is: %p\n", p);
    return 0;

}