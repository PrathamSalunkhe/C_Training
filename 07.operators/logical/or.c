//this program is for or logical operator
//in or operator (||) --> one or more than one condition is required


#include <stdio.h>

int main()
{
    int b=10;
    //if any one condition is true
    if(b != 10 || b >= 46 || b <= 12 || b > 5)
    {
        //print the output
        printf("Welcome to C Programming\n");
    }
    else
    {
        //if not print this o/p
        printf("You are wrong\n");
    }
}