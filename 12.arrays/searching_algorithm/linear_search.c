//this program is to understand the linear search algorithm

#include <stdio.h>

#define N 10

int arr[N] = {5,12,7,1,78,3,9,42,76,8};

void linear_search(int arrr[], int data)
{
    int i;
    int count=0;
    for(i=0;i<N;i++)
    {
        if(arr[i]==data)
        {
            count=1;
            printf("Data entered is found\n");
            break;
        }
    }
    if(count==0)
    {
        printf("Data is not found\n");
    }
    
}
int main()
{
    int data;
    int j;
    for(j=0;j<N;j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\nEnter the data you want to search in the array: ");
    scanf("%d", &data);
    linear_search(arr, data);    
    
    return 0;
}