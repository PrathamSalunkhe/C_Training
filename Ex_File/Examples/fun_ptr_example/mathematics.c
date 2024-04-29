//this program is to do mathematical operations using function pointer with structure

#include <stdio.h>
#include <stdlib.h>

typedef struct mathematics
{
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    float (*divide)(float, float);
}MATHEMATICS;

int ADDITION(int a, int b)
{
    return a+b;
}

int SUBTRACTION(int a, int b)
{
    return a-b;
}

int MULTIPLICATION(int a, int b)
{
    return a*b;
}

float DIVISION(float a, float b)
{
    return a/b;
}

int main()
{
    MATHEMATICS maths;
    int a,b;
    int choice;
    int result;
    float result1;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter your choice: \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        maths.add = ADDITION;
        result = maths.add(a,b);
        printf("The addition is: %d\n", result);
        break;
    
    case 2:
        maths.subtract = SUBTRACTION;
        result = maths.subtract(a,b);
        printf("The subtraction is: %d\n", result);
        break;

    case 3:
        maths.multiply = MULTIPLICATION;
        result = maths.multiply(a,b);
        printf("The multiplication is: %d\n", result);
        break;

    case 4:
        maths.divide = DIVISION;
        float p = (float)a;
        float q = (float)b;
        result1 = maths.divide(p,q);
        printf("The division is: %f\n", result1);
        break;

    default:
        printf("Invalid Choice\n");
        exit(1);
    }
}