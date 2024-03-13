//this program is to understand the dangling pointer

#include <stdio.h>

int* fun()
{
    int num = 10;   //num is the local variable to function
    return &num;   //it will get destroyed after execution of function
}                //we are trying to return the address of deallocated (non-existing) memory
int main()
{
    int *ptr = NULL;
    ptr = fun();   //here we are rtry to store that returned address of non existing memory
      //so it is a dangling pointer, which is points to some non-existing memory.
    printf("%d", *ptr);  
    return 0;              //segmentation fault
}