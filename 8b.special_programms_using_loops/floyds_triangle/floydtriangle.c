//this program is to printf the floyd's triangle, right angled triangle

#include <stdio.h>
int main()
{
    int i,j,n,p=1;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)  //rows
    {
        for(j=1;j<=i;j++)  //columns
        {
            printf("%d", p);
            p++;
        }
        printf("\n");
    }
    return 0;
}