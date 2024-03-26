//this program is to underastand the file inclusion preprocessor directive

#include <stdio.h>  //inclusion of standard i/o file for use of predefined functions

#include "include_file.h"   //inclusion of user defined header file
//it contains the defination of the function which is used in this program

int main()
{
    int a, b, addition = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    addition = add(a,b);    //function called

    printf("The addition is: %d\n", addition);

    return 0;
}


