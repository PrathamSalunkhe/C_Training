//this program is to print the string 

#include <stdio.h>
int main()
{
    char *ptr = "hello pratham salunkhe here";
    
    printf("%.7s\n", ptr);    //this will print the first 7 characters of string

    //in this statement, 16 is the size of the field 
    //within which the first 7 characters of string will be printed from Right Hand Side
    printf("%16.7s\n", ptr);   
                              
    printf("%s\n", ptr);  //the whole string will be printed
}