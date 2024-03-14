//tihs program is to understand the string concatenation

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "welcome to ";
    char str2[100] = "c programming";

    //strcat function appends the content of string str2 at the end of the string str1.
    strcat(str1, str2);

    printf("%s\n", str1);   //and it returns the pointer to the resulting string str1.
    return 0;
}
