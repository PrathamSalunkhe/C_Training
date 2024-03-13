/*if two pointers are pointing to different arrays
then performing subtraction them leads to an undefined behaviour*/

#include <stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={10.20,30,40};
    int *p = &a[0];
    int *q = &b[3];
    printf("%d", q-p);
    return 0;
}