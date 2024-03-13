//program to print the pyramid upside down with 1 star in last row
//in this code we have to print stars with space (* * *) just like that, not like this(***) 
//for that purpose we have taken one variable k, it will toggle from 1 to 0, and 0 to 1.

#include <stdio.h>

int main()
{
    int i,j,k,n,p=9;
    printf("Enter the no. of rows\n");
    scanf("%d", &n);   //take the no. of rows form user
    for(i=1;i<=n;i++)    //no. of rows
    {
        k=1;
        for(j=1;j<=2*n-1;j++)   //no. of columns
        {
            if(j>=n-(n-i) && j<=n+(n-i) && k)  //acc. to this cond, star and space will print
            {
                /*(printf("%d", p);
                p--;*/
                printf("*");  //after print of *,  k will be 0,
                k=0;          //so, " " will print on next column
            }
            else
            {
                printf(" ");   //after print of " ", k will be 1,
                k=1;           //if k=1, next time star will be print
            }
        }
        printf("\n");
    }
}