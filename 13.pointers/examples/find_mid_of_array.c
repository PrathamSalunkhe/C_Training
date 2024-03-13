//thias program is to find the mid of an array using pointer

#include <stdio.h>

int *findmid(int a[], int);  //function delaration

int main()
{
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);  //length of array
    printf("the length of an array is: %d\r\n", n);

    int *mid = findmid(a,n);  //function called 

    printf("mid element of array is: %d\n", *mid);
    return 0;
}

int *findmid(int a[], int n)
{
    return &a[n/2];   //divide the length of array by 2, it will give the mid of array 
}