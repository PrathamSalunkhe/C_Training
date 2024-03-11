//this program is to print the row sum and column sum
//of 2d array

#include <stdio.h>
int main()
{
      
    int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j, r_sum = 0, c_sum = 0;

    /*printf("The elements of array are: \n");
    for(i=0;i<5;i++)       //print the whole elements of an array
    {
        for(j=0;j<5;j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");*/

    //for sum of rows
    printf("Row Sum: ");
    for(i=0;i<5;i++)          //when i=0(in first row), we will add total elements
    {                         //and store in one variable (r_sum)
        for(j=0;j<5;j++)      //this process will continue till all the rows
        {
            r_sum = r_sum + a[i][j];
        }
        printf(" %d", r_sum);    //print the total of rows
        r_sum = 0;
    }

    //for sum of columns
    printf("\nColumn Sum: ");
    for(j=0;j<5;j++)           //when j=0(in first column), we will add total elements
    {                          //and store in one variable (c_sum)
        for(i=0;i<5;i++)       //this process will continue till all the columns
        {
            c_sum = c_sum + a[i][j];
        }
        printf(" %d", c_sum);    //print the total of columns
        c_sum = 0;
    }
    printf("\n");        
    return 0;
}