//this program is to print the right angle triangle of numbers
//in first row 1
//in second row 2
//in third row 3
//and so on.....


#include <stdio.h>
int main()
{
    int i,j,n,p=1;
    printf("Enter the no. of rows");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", p);  //p=1, so 1 will print in first row
            //printf("*");
        }
        p++;      //p will increment on new line 
        printf("\n");
    }
}