//example based on nested if construct

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number 1\n");
    scanf("%d", &a);
    printf("Enter the number 2\n");
    scanf("%d", &b);
    if(a <= b)           //1st cond
    {
        //if above cond satisfies then compiler comes here
        if(a+b <= 20)    //2nd cond
        {
            //if 2nd cond is true then this will be the o/p
            printf("The value of a+b is: %d\n", a+b);
        }
        else
        {
            //if 2nd cond is false then this will be o/p
            printf("The addition is greater\n");
        }
    }
    else
    {
        //if first cond is false then this will be o/p
        printf("num1 is greater than num2\n");
    }
    return 0;
}