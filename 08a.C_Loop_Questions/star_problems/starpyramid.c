//this program is to print the star pattern of
//upside down right angle triangle

#include <stdio.h>
int main()
{
    int i,j,k,n;
    int count = 1;
    printf("Enter the number of rows you want\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)  //rows
    {
        for(j=n;j>=i;j--)  //columns
        {
            /*printf("%d", count);
            count++;*/
            printf("*");
        }
        printf("\n");
    }
    
}