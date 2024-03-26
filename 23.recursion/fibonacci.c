//this program is for fibonacci series

#include <stdio.h>

int fib(int i)
{
    if(i==0)
        return 0;   //base condition
    if(i==1)
        return 1;
    return fib(i-1) + fib(i-2); //recursive function call
}
int main()
{
    int i,n;

    printf("Enter the number of elements you want in the series: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("%d ", fib(i));  //function call
    }
    printf("\n");
    return 0;
}