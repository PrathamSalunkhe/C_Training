//this program is to find the total by function

#include <stdio.h>

int sum(int, int);  //function declaration


int main()
{
    int total;
    total = sum(5, 6); //function calling.  values 5 & 6 are passed to a & b
    printf("The total is %d\n", total);
    return 0;
}

int sum(int a, int b)  //function defination. a & b receives the values
{
    int s;
    s = a+b;  // o/p of the operation will stored in the s
    return s;   //s will return the value
}