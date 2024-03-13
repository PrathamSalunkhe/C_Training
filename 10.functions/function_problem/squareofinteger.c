//Write a program in C to find the square of any number using the function.

#include <stdio.h>
int square(int);   //function declaration

int main()
{
    int n, x;
    printf("Enter a number: ");
    scanf("%d", &x);   //take the number from user which we have to obtain a square

    n = square(x);    //call the function
    printf("The square of %d is %d\n", x,n);   //print the result
}

int square(int a)    //function defination
{
    int s;
    s = a * a;   // o/p of the operation will stored in the s
    return s;     //s will return the value
}