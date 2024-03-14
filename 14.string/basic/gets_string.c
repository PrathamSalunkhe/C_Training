//this program is to understand, how the gets function scan the string

#include <stdio.h>
void main()
{
    char a[10];
    printf("Enter a string\n");
    
    gets(a);       //here gets() will scan the whole string without chekcing the size

    printf("%s", a);

    /*gets() is unsafe to use,  it will overwrite the memory 
      beyond the memory allocated to the character array*/
}