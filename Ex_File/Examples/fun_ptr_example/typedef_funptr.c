//this program is to perform mathematical operations

#include <stdio.h>

typedef int (*IntFunptr)(int, int);
typedef float (*FloatFunptr)(float, float);


int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b; 
}

int mul(int a, int b)
{
    return a*b;
}

float div(float a, float b)
{
    return a/b;
}

int main()
{
    IntFunptr intoperation;
    FloatFunptr floatoperation;

    int a,b;
    int choice;
    int result = 0;
    float result1 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter your choice\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        intoperation = add;
        break;
    
    case 2:
        intoperation = sub;
        break;

    case 3:
        intoperation = mul;
        break;

    case 4:
        floatoperation = div;
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }

    if(choice == 4)
    {
        float p = (float)a;
        float q = (float)b;
        result1 = floatoperation(p,q);
        printf("The division is: %.3f\n", result1);
    }
    else
    {   
        result = intoperation(a,b);
        printf("The multiplication is: %d\n", result);
    }
}