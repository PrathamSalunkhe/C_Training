//this program is for and logical operator
//in and operator (&&) ---> all the conditions are compulsory

#include <stdio.h>
int main()
{
    int a = 5;
    //if all the conditions are satified
    if(a == 5 && a!= 3243 && a <= 55 && a > 4)
    {
        //then the o/p will be print
        printf("Welcome to C Programming\n");
    }
    else
    {
        //if not then this will print
        printf("You are wrong\n");
    }
    return 0;
}