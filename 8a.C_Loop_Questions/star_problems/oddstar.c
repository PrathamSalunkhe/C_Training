//this program is to print the downside pyramid with 2 stars in last row 
#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the no. of rows");
    scanf("%d", &n);  //take rows no. from user
    for(i=1;i<=n;i++)  //rows
    {
        for(j=1;j<=2*n;j++)  //columns
        {
            if(j>=n-(n-i) && j<=n+((n-i)+1)) //acc. to this condition stars and spaces will
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}