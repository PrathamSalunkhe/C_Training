//this program is to do mathematical operations using function pointers

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
    //array of function pointer declared by assigning functions
    float (*funcptr[4])(float, float) = {add,sub,mul,div};
    int choice;
    float a,b, o;

    printf("Enter a choice: \n");
    printf("0 for addition\n");
    printf("1 for subtraction\n");
    printf("2 for multiplication\n");
    printf("3 for division\n");
    scanf("%d", &choice);

    printf("Enter two numbers\n");
    scanf("%f %f", &a, &b);

    o = funcptr[choice](a,b);  //calling the function pointer
    if(choice == 0 || choice == 1 || choice == 2)
    {
        printf("The value obtain is: %d\n", (int)o);

    }
    else
    {
        printf("The value obtain is: %.3f\n", o);
    }
    
}