//this program is to understand, how the string is scan

#include <stdio.h>
void main()
{
    char a[10];
    printf("Enter the string\n"); 

    //as we are passing the address of the character array so, no need to enter the & before a
    scanf("%s", a);   //scanf doesn't store the white space character in string
    //it will store the string upto the first whitespace encountered by scanf

    printf("%s", a);  //so printf will print the string stored by scanf

    //if we enter the string -> "welcome to c programming"
    //scanf will store -> welcome
    //and printf will print -> welcome
}