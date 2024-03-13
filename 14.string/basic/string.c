//this program is to understand the string

//using \ for new line called splicing

#include <stdio.h>
int main()
{
    /*printf("%s\n", "Hello, Welcome to the new topic of C Programming.\
    string");    //using \ has disadvantage, that it considers spaces in the string

    printf("%s\n", "Hello, Welcome to the new topic of C Programming."
    "string");*/

    char s[5] = "Hello";
    char t[5];
    int i=0;

    while(s[i]!='\0')
    {
        t[i] = s[i];
        i++;
    }

    printf("%s", t);
}