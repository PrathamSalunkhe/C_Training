// program to print the value given
#include <stdio.h>

int main()
{
    // when we wrtie 0 in front of any value, it will be an octal vaLue not a decimal value
    int var = 052;      //this is a octal value
    printf("%o", var);   //%o is the format specifier for octal value
    return 0;
}