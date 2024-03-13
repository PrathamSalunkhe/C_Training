//example based on function

#include <stdio.h>
#include "declare.h"


int main()
{
    int sum,sub,mul, x;
    float div;
    int i,j;
    printf("Enter two numbers\n");  //take two numbers from user which we have to operate  
    scanf("%d %d", &i, &j);
    printf("Enter your choice\n"); 
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
      //enter the choice, which function you have to call
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        sum = add(i,j);    //calling add function
        printf("Addition of %d and %d is %d\n", i,j, sum);
        break;
    case 2:
        sub = subtract(i,j);  //calling subtract function
        printf("Subtraction of %d and %d is %d\n", i,j,sub);
        break;
    case 3:
        mul = multiply(i,j);  //calling multiply function
        printf("Multiplication of %d and %d is %d\n", i,j,mul);
        break;
    case 4:
        div = divide(i,j);  //calling division function
        printf("Division of %d and %d is %.3f\n", i,j,div);
        break;
    default:
        printf("You have entered wrong choice\n");
        break;
    }
    return 0;
}

int add(int a, int b) //add function defination
{
    int c;    //if add function called then 
    c = a+b;  //c will stored the addition and c will return the o/p    
    return c;  //to the called function
}

int subtract(int x, int y)  //subtract function defination
{
    int c;    //if subtract function called then
    c = x-y;  //c will stored the subtraction and c will return o/p 
    return c;  //to the called function
}

int multiply(int p, int q)  //multiply function defination
{
    int c;   //if multiply function called then 
    c = p*q;  //c will stored the multiplication and c will 
    return c;  //return the o/p to the called function
}

float divide(float m, float n)    //divide function defination
{
    float c;    //if division function called then
    c = m/n;   //c will stored the division and c will
    return c;  //return the o/p to the called function
}

