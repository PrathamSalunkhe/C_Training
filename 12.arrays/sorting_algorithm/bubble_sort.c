//this program is for sorting of array using bubble sort

#include<stdio.h>

int main()
{
    int arr[] = {5,23,6,1,7,89,43,78,3,53};
    int i,j;
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    int flag;
    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    //sorting of array using bubble sort
    for(i=0;i<n-1;i++)  //this loop is for passes
    {
        flag = 0;
        for(j=0;j<n-1-i;j++)        //this loop is for comparisons
        {
            if(arr[j]>arr[j+1])     //comparing adjacent elements
            {                       //if condtion satisfies
                temp = arr[j];      //swapping of that elements done
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)   //this is for avoiding extra comprason
            break;
    }
    printf("\nAfter sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}