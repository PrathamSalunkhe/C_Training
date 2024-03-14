//this program is to find the length of string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "hello world"; //here we can also write as (*str) and (str[]) both are same 
    //here strlen() function calculates the length of a string not the length of an array
    
    printf("%ld\n", strlen(str));
    return 0;
}