//example based on else if construct

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if(a <= 20)      //if this cond satisfies 
    {
        printf("Welcome to home\n");  //this will be print
    }
    else if(21 <= a <= 50)   //if above cond not satisfies then will check
    {
        printf("Good Afternoon\n"); //this will print after 2nd cond satisfies
    }
    else
    {
        printf("HELLO\n");   //if both cond does not satisfies this will be print
    }
    return 0;
}