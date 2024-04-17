//this program is to understand the function pointer using typedef 
//by basic example

#include <stdio.h>

//define function pointer using typedef
typedef int(*funptr)(int, int);

int add(int,int);   //declaring prototype of function

int main()
{
    int result;

    funptr ptr; //declare variable to of type funptr

    ptr = add;   //assign address of function to function ptr 
    
    result = (ptr)(10,20);     //function calling
    printf("the addition is: %d\n", result);
    return 0;
}

int add(int a, int b)
{
    return a+b;   //function returning the value
}