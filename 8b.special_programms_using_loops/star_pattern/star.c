//this program is for pyramid of stars

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows you want\n");
    scanf("%d", &n);
    for(i=1;i<n;i++)    //for rows
    {
        for(j=1;j<2*n-1;j++) //for columns
        {
            if(j >= n-(i-1) && j <= n+(i-1)) //to print the stars and spaces acc. to pattern
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
    return 0;
}