//this program is to create a calculator using function pointer

#include <stdio.h>

//defining the functions
float add(float a, float b)
{
    return a+b;
}
float sub(float a, float b)
{
    return a-b;
}
float mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}


int main()
{
    /*each element in array of function pointer contains the address of a function*/
    //declaring the function pointer with assigning the address
    float (*funcptr[10])(float, float) = {add,sub,mul,div};
    int choice;
    float a,b, o;

    printf("Enter a choice: \n");
    printf("0 for addition\n");
    printf("1 for subtraction\n");
    printf("2 for multiplication\n");
    printf("3 for division\n");
    scanf("%d", &choice);
    //at runtime user will enter the choice and then only the function would be called

    printf("Enter two numbers\n");
    scanf("%f %f", &a, &b);

    o = funcptr[choice](a,b);  //calling the function pointer

    printf("The value obtain is: %.3f\n", o);
}