//this program is to print the pyramid of numbers

#include <stdio.h>
int main()
{
    int i,j,k,n, p=0, q=0;
    int count=1;
    printf("Enter the no. of rows you want\n");
    scanf("%d", &n);   //take no. of rows form user
    for(i=1;i<=n;i++)  //rows
    {
        k=1;
        for(j=1;j<=2*n-1;j++) //columns
        {
            if((j >= n-(i-1)) && (j <= n+(i-1)) && k)  //acc. to this cond numbers will print
            {
                printf("%d", count);   //init. c=1 so, on first row 1 will print
                count++;             //after that count will increment accordingly
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
            q++;
        }
        printf("\n");
        p++;
    }
    printf("%d\n", p);
    printf("%d\n", q);
}