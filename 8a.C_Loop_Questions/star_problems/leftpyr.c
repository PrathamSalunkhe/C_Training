//this program is to print the right angle triangle of stars

#include <stdio.h>
int main()
{
    int i,j,n;
    int count=1;
    printf("Enter the number of rows you want\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)  //rows
    {
        for(j=1;j<=i;j++)  //columns
        {
            /*printf("%d", count);
            count++;*/
            printf("*");
        }
        printf("\n");
    }
}