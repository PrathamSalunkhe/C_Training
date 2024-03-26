//this program is to understand the typecasting in c

#include <stdio.h>

int main()
{
    int a,b;
    double result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //result = a/b;

    //here variables a and b are typecasted first then evaluation is done
    result = (double)a/b;

    printf("The result is: %.3f\n", result);

    return 0;
}