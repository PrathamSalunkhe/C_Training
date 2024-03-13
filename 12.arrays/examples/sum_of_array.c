//this program is to find the sum of two arrays  and stored it into another array

#include <stdio.h>
int main()
{
    int a1[5]={1,3,5,7,9};
    int a2[5]={2,4,6,8,10};
    int a3[5];
    int i;

    for(i=0;i<5;i++)
    {
        a3[i]=a1[i]+a2[i];
    }
    printf("Sum of array is: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ", a3[i]);
    }
    printf("\n");
    return 0;
}