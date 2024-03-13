//Write a program in C to swap two numbers using a function.
//without using third variable

#include <stdio.h>

int swap(int *, int *);   //function declaration

int main()
{
    int a,b, z;
    printf("Enter two numbers: "); //take two numbers from user
    scanf("%d %d", &a, &b);

    swap(&a,&b);           //function calling

    printf("After swaping a = %d and b = %d\n", a,b);
}

int swap(int *p, int *q)    //function defination
{                       //*p stores the value of a, *q stores the value of b
    *p=*p+*q;    
    *q=*p-*q;         //this is the operation for swaping
    *p=*p-*q;
}