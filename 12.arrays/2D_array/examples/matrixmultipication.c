//this program is to multiply two matrices

#include <stdio.h>
#define MAX 50    //define the size of matrices using macros
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int arows,acolumns,brows,bcolumns;
    int i,j,k;
    int sum=0;

    //rows and columns of matrix a
    printf("Enter the rows and columns of matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    //elements of matrix a
    printf("Enter the elements of matrix a: \n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //rows and columns of matrix b
    printf("Enter the rows and columns of matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    //for matrix multiplication,
    //columns of 1st matrix are equal to rows of 2nd matrix
    if(brows != acolumns)
    {
        printf("Multiplication of matrices can't be possible\n");
    }
    else
    {
        //enter the elements of matrix b
        printf("Enter the elements of matrix b: \n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                
                scanf("%d", &b[i][j]);
            }
        }

        //product of matrices
        printf("Product of two matrices is: \n");

        //i=0(for 1st row of a), i=1(for 2nd row of a), i=2(for 3rd row of a)
        for(i=0;i<arows;i++)       
        {
            //j=0(for 1st column of b), j=1(for 2nd column of b), j=2(for 3rd column of b)
            for(j=0;j<bcolumns;j++)  
            {
                //to move the row of b --> 0 > 1 > 2
                //k=0(for 1st row of b), k=0(for 2nd row of b), k=0(for 3rd row of b)
                for(k=0;k<brows;k++)  
                {
                    sum += a[i][k] * b[k][j];
                }
                product[i][j] = sum;
                sum = 0;
            }
        }

        //print the matrix of product
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return 0;
    }
}

    