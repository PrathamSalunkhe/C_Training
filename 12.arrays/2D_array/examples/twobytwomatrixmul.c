//this program is to multiply two by two matrix

#include <stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j,k,sum=0;

    //enter the elements of matrix a
    printf("Enter the elements of matrix a: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //enter the elements of matrix b
    printf("Enter the elements of matrix b: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    //for the product of two matrices
    printf("The product of two matrices is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j]= sum;
            sum = 0;
        }
    }

    //print the product matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}