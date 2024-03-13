//this program is to print the value of "a" by using recursion and pointer

#include <stdio.h>

int f(int *a, int n)   //f(12,6) function defined
{
    if(n<=0)        //if this condition satisfies
        return 0;   //0 will return to callee
 
    else if(*a % 2 == 0) 
        return *a + f(a+1, n-1); //the value will return and fun will called

    else
        return *a - f(a+1, n-1);  //the value will return and function will called
}

int main()
{                             //here, name of array points to the first element of an array
    int a[]={12,7,13,4,11,6};       //first, a=12,
    printf("%d", f(a,6));     //f(a,6) function called
    getchar();
    return 0;
}