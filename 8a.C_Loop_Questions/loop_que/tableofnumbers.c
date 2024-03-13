//this program is to print the table of numbers

#include <stdio.h>

int table(int, int);

int main()
{
    int n, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    //function will call in loops
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,table(n, i));
    }
    
    return 0;
}

/*
 *@brief : multiplies two numbers 
 *param1 : int a 
 *param2 : int i
 *retval : int tab 
*/
int table(int a, int i)
{
    int tab;
    tab = a * i;
    return tab;
}