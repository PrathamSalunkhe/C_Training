//program to print the 2d array

#include <stdio.h>
int main()
{
    int arr[2][3];   //declaration of 2d array
    int i,j;
    for(i=0;i<2;i++)     //2d arrays can be printed using two nested for loops
    {
        for(j=0;j<3;j++)
        {
            //take the inputs from the user
            printf("Enter the element in array index %d %d: ",i,j);
            scanf("%d", &arr[i][j]);  //store it inside the array
        }
    }
    printf("\nThe elements of an array are: \n");
    for(i=0;i<2;i++)     //print the 2d array
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}