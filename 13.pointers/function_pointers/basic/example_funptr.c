//this program is to understand the function pointer 
//by basic example

#include <stdio.h>

int add(int,int);   //declaring prototype of function

int main()
{
    int result;

    //declaring pointer to a function
    int (*ptr)(int,int) = &add;   //function pointer declaration with address assignment
    
    result = (*ptr)(10,20);     //function calling
    printf("the addition is: %d\n", result);
    return 0;
}

int add(int a, int b)
{
    return a+b;   //function returning the value
}