//define the length of array using macros

#include <stdio.h>
#define N 10

int main()
{
    int i,arr[N];
    for(i=0;i<N;i++)
    {   //take the elements of an array from user
        printf("Enter the element in array index %d: ", i);
        scanf("%d", &arr[i]);  //store the elements in an array
    }

    //print the elements
    printf("The elements of an array are: \n");
    for(i=0;i<N;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}