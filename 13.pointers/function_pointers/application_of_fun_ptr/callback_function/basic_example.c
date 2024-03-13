//this program is to understand the callbasck function using function pointer

#include <stdio.h>

//sum and sub are the calllback functions
void sum(int a, int b)
{
    printf("sum = %d\n", a+b);
}

void sub(int a, int b)
{
    printf("sub = %d\n", a-b);
}

//display function pointing to the add. of sum&sub function using function pointer
/*at first sum function's address was accept
 /it will pass the arguments to sum function
 then sub function's address was accept
 it will pass the arguments to sum function*/
void display(void (*fptr)(int, int)) 
{       
    (*fptr)(5,8);     //calling the function             
}                             
                              
 
void main()
{
    //call to the display function
    display(sum);  //add of sum function is passed to display function
    display(sub);  //add of sub function is passed to display function
}