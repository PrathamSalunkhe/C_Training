//this program is to print the 2d array using pointer

#include <stdio.h>
int main()
{
    int a[2][2]={1,2,3,4};

    printf("a[0][0]= %d\n", **a);
    printf("a[0][1]= %d\n", **a+1);
    //printf("\n");
    printf("a[1][0]= %d\n", **(a+1));
    printf("a[1][1]= %d\n", *(*(a+1)+1));
    //printf("\n");
    return 0;
}