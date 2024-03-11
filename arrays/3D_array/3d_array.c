//program to print the 3d array

#include <stdio.h>
int main()
{
    int arr[2][2][2];   //declaration of 3d array
    int i,j,k;

    for(i=0;i<2;i++)  //for no. of 2d arrays
    {
        for(j=0;j<2;j++) //for no. of rows
        {
            for(k=0;k<2;k++)  //for no. of columns
            {
                printf("Enter the element in array index %d %d %d: ", i,j,k);
                scanf("%d", &arr[i][j][k]);     //take inputs from user
            }
        }
    }

    printf("\nthe elements of an array are:\n");
    for(i=0;i<2;i++)                                //print the 3d array
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}