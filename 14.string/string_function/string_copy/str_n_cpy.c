//this program is to copy the number of characters from one string to another

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6] = "Hello";
    char str2[4];
    
    //strncpy(destination, source, sizeof(destination))
    strncpy(str2, str1, sizeof(str2));  //strnpy copy the number of elements of str1 to str2

    //strncpy will never add the '\0' to the str2(destination),
    str2[sizeof(str2)]='\0';        //so we have to add the '\0' to the end of str2

    printf("%s\n", str2);
    
    return 0;
}