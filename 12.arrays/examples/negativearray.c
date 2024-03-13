//this program is to find the negative elements in an array

#include <stdio.h>
int main()
{
    int a[10]={2,5,-4,-56,-3,6,9,-78,-8,1};
    int i;

    printf("The negetive elements are: \n");
    for(i=0;i<10;i++) 
    {
        if(a[i]<0)   //numbers which are less than zero are negative
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    return 0;
}