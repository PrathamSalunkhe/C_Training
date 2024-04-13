//this program is to understand the use of function pointers with structures

#include <stdio.h>
#include <stdlib.h>

/// @brief defining a structure containing function pointers as a members
struct calculator
{
    int (*add)(int, int);
    int (*subtract)(int, int);
    int (*multiply)(int, int);
    float (*divide)(float, float);
};

/// @brief add function
/// @param a 
/// @param b 
/// @return additon
int add(int a, int b)
{
    return a+b;
}

/// @brief subtract function
/// @param a 
/// @param b 
/// @return subtraction
int subtract(int a, int b)
{
    return a-b;
}


/// @brief multiplication function
/// @param a 
/// @param b 
/// @return multiplication
int multiply(int a, int b)
{
    return a*b;
}

/// @brief division function
/// @param a 
/// @param b 
/// @return division
float divide(float a, float b)
{
    return a/b;
}

int main()
{
    struct calculator cal;  //here cal is a variable of type struct calculator 
    int choice;
    int a,b;
    int result;
    float result1;
    printf("Enter a choice: 1 for add, 2 for subtract, 3 for multiply, 4 for division: \n");
    scanf("%d", &choice);

    if(choice > 4 || choice < 1)
    {
        printf("Invalid Choice\n");
        exit(1);
    }

    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);

    switch (choice)
    {
    case 1:
        cal.add = add;  //assigning the function pointer to the function
        result = cal.add(a,b);  //calling the function
        printf("The result is: %d\n", result);
        break;
    case 2:
        cal.subtract = subtract;    //assigning the function pointer to the function 
        result = cal.subtract(a,b); //calling the function
        printf("The result is: %d\n", result);
        break;
    case 3:
        cal.multiply = multiply;    //assigning the function pointer to the function 
        result = cal.multiply(a,b); //calling the function
        printf("The result is: %d\n", result);
        break;
    case 4:
        cal.divide = divide;    //assigning the function pointer to the function
        float p = (float)a;     //typecasting the values from int to float 
        float q = (float)b;
        result1 = cal.divide(p,q);  //calling the function
        printf("The result is: %f\n", result1);
        break;
    default:
        printf("Invalid Choice\n");
        return 0;
    }

}