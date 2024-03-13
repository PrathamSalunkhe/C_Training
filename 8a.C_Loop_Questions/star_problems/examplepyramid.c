//program to print the pyramid (^)
//in this code we have to print stars with space (* * *) just like that, not like this(***) 
//for that purpose we have taken one variable k, it will toggle from 1 to 0, and 0 to 1.
#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter the no. of rows\n");
    scanf("%d", &n); //take no. of row from user
    for(i=1;i<=n;i++)  //rows
    {
        k=1;     //init k=1
        for(j=1;j<=2*n-1;j++)   //columns
        {
            if(j>=n-(i-1) && j<=n+(i-1) && k)  //acc. to this cond, stars and spaces will print
            {
                printf("*");  //after print of *,  k will be 0,
                k=0;         //so, " " will print on next column
            }
            else
            {
                printf(" ");  //after print of " ", k will be 1,
                k=1;       //if k=1, next time star will be print
            }
        }
        printf("\n");
    }
}