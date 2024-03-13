//problem based on recursion

#include <stdio.h>

int fact(int n)  //function defined
{
    if(n==1)      //base case
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);  //recursive procedure  //function called by itself
    }
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Factorial of a number %d is %d\n", n, fact(n));  //user called the function
}