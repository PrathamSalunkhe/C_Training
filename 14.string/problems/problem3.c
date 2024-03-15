//this program is to find the o/p

#include <stdio.h>

void foo(char *a)
{
    if(*a && *a!=' ')   //if conditon is true
    {                   //then 
        foo(a+1);   //call the recursive function
        putchar(*a);
    }
}

int main()
{
    char *a = "ABCD EFGH";  //define the string
    foo(a);     //call the function
}