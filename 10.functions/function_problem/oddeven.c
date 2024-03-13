// Write a program in C to check if a given number is even or odd using the function.

#include <stdio.h>

int fun(int);   //function declaration

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    fun(n);   //function calling
}

int fun(int a)  //function defination
{    
    //condition
    if(a%2==0)   //if number satisfies the condtion then it is even number
    {
        printf("%d is an even number\n", a);
    }
    else     //if not, then it is odd number
    {
        printf("%d is an odd number\n", a);
    }

}