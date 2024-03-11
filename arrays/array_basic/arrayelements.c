//this program is to find the no. of elements in an array

#include <stdio.h>
int main()
{
    int a[]={1,23,3,4,52,14,2,78,344,64,36,3,2,412,363,6,23,42,4,34,4,5,6,6,2,5,78,8,5,6,74,4,56};

    printf("there are %d elements in this array\n", sizeof(a)/sizeof(a[0]));
}