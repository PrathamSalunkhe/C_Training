//Write a program in C to find the sum of all elements of the array.

#include <stdio.h>
int main()
{
    int a[5]={2,6,9,3,5};
    int i,sum=0;

    for(i=0;i<5;i++)
    {                  //init. sum=0, add i[0] to the sum, and sum will store.
        sum += a[i];     //do the process until last element  
    }                     
    printf("%d\n", sum);
    return 0;
}