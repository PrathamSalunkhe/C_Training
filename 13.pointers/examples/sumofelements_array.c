//this program is to find the sum of elements in an array using pointers

#include <stdio.h>
int main()
{
    int a[10]={12,56,67,54,78,45,43,89,35,58};
    int *p, sum=0;

    //as name of array can be used as a pointer to the first element of an array
    //so we can directly put a instead of &a[0] and a+10 instead of &a[10]
    for(p=a;p<a+10;p++)  //for(p=&a[0];p<&a[10];p++) 
        sum += *p;

    printf("The sum is %d\n", sum);
    return 0;
}