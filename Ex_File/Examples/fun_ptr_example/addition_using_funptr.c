//this program is to perform addition using function pointer

#include <stdio.h>

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
    int (*fptr1)(int, int);
    int (*fptr2)(int, int);
    int (*fptr3)(int, int);
    float (*fptr4)(float, float);
    int a,b;
    int addition= 0, subtraction = 0, multiplication = 0;
    float division = 0;
    int choice;

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
        fptr1 = add;
        addition = fptr1(a,b);
        printf("The addition is: %d\n", addition);
        break;
    
    case 2:
        fptr2 = sub;
        subtraction = fptr2(a,b);
        printf("The subtraction is: %d\n", subtraction);
        break;

    case 3:
        fptr3 = mul;
        multiplication = fptr3(a,b);
        printf("The multiplication is: %d\n", multiplication);
        break;

    case 4:
        fptr4 = div;
        float p = (float)a;
        float q = (float)b;
        division = fptr4(p,q);
        printf("The division is: %f\n", division);
        break;  

    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}