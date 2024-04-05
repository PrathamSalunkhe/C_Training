//this program is to understand the binary search algorithm

#include<stdio.h>


/// @brief this function searches the element using binary search algorithm
/// @param arr 
/// @param l 
/// @param r 
/// @param data 
/// @return the index of searched element
int binary_search(int arr[], int l, int r, int data)
{
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(data == arr[mid])
        {
            return mid;
        }
        else if(data<arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,3,5,7,8,9,12,42,76,78};
    int data;
    int j, res;
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(j=0;j<N;j++)
    // {
    //     printf("%d ", arr[j]);
    // }
    printf("Enter the data you want to search in the array: ");
    scanf("%d", &data);
    res = binary_search(arr,0, n-1, data);   //call the function to search data 
    if(res!= -1)
    {
        printf("The data is found at index: %d\n", res);
    }
    else
    {
        printf("Thed data is not found\n");
    }
    return 0;
}