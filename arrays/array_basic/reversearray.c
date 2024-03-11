//this program is to print the reverse order of an array

#include <stdio.h>

int main()
{
    //declaration + defination + initialization of array
    int arr[9]={34,56,54,32,67,89,90,32,21};   
    int i;
    for(i=0;i<9;i++) //for loop to print the array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i=8;i>=0;i--)  //for loop to print the array in the reverse order
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;


}