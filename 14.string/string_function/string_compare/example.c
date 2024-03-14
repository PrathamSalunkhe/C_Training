//this program is to compare two strings using array of (strings)pointers

#include <stdio.h>
#include <string.h>

int main()
{
    //here we have declare array of strings
    char *fruits[] = {"2 Oranges", "2 Apples", "3 Bananas", "1 Pineapple"};

    if(strcmp(fruits[1], fruits[2]) < 0)    //fruits[1] and fruits[2] element of the array
        printf("%s are lesser than %s\n", fruits[1],fruits[2]);
    else if(strcmp(fruits[1], fruits[2]) > 0)
        printf("%s are greater than %s\n", fruits[1], fruits[2]);
    return 0;
}