//this program is to concatenate the n number of characters to string

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[5] = "He";
    char str2[200] = "llo!";

    //strncat(str1, str2, size of array - size of stirng - 1(creating room for \0))
    strncat(str1, str2, sizeof(str1)-strlen(str1)-1);
    //......................5 - 2 - 1 = 2, so,2 characters from str2 will be append to str1

    //strncat automatically adds the NULL character at the end of the resulting string
    printf("%s\n", str1);
    return 0;
}