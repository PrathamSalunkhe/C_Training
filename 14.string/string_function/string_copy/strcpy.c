//this program is to copy strings

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[11]= "hello world";
    char str2[11];

    //strcpy(destination, source)
    strcpy(str2, str1); //contents of str1 will copied in str2

    printf("%s\n", str2);
}