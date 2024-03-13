//this program is to create calculator
//here we used the array of function pointer


#include <stdio.h>

//defination of function pointer types for different function
typedef int (*IntOperation)(int, int);
typedef float (*FloatOperation)(float, float);

//functions defined below
int add(int a,int b)   //when choice is 0, funptr will points to this function
{                             //and values of a,b accepts here
    // int a,b;
    // printf("Enter two numbers\n");
    // scanf("%d %d", &a,&b);
    //printf("The addition is: %d\n", a+b);
    return a+b;
}

int sub(int a,int b)   //when choice is 1, funptr will points to this function
{                             //and values of a,b accepts here
    // int a,b;
    // printf("Enter two numbers\n");
    // scanf("%d %d", &a,&b);
    //printf("The subtraction is: %d\n", a-b);
    return a-b;
}

int mul(int a,int b)   //when choice is 2, funptr will points to this function
{                             //and values of a,b accepts here
    // int a,b;
    // printf("Enter two numbers\n");
    // scanf("%d %d", &a,&b);
    //printf("The multiplication is: %d\n", a*b);
    return a*b;
}

float div(float a,float b)   //when choice is 3, funptr will points to this function
{                             //and values of a,b accepts here
    // float a,b;
    // printf("Enter two numbers\n");
    // scanf("%f %f", &a,&b);
    return a/b;
}

int main()
{   
    int choice;               
    int a,b;

    printf("Enter your choice: \n");
    printf("0 for add\n");
    printf("1 for sub\n");
    printf("2 for mul\n");
    printf("3 for div\n");
    scanf("%d", &choice);   //enter the choice
    
    //at runtime user will enter the choice and then only the function would be called

    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);   //enter the number which you have to operate
    
    //declare function pointer variable
    int (*intfunptr)(int, int);
    float (*floatfunptr)(float, float);
    
    //assign the function to the function poiner acc. to choice of user
    switch (choice)
    {
    case 0:
        intfunptr = (IntOperation)add;
        break;
    
    case 1:
        intfunptr = (IntOperation)sub;
        break;

    case 2:
        intfunptr = (IntOperation)mul;
        break;

    case 3:
        floatfunptr = (FloatOperation)div;
        break;
    default:
        printf("Invalid Choice\n");
        return 0;
    }
    
    if(choice == 3)  //choice 3 only
    {
        float p = (float)a; //type cast the integer value into float
        float q = (float)b;
        float result1 = ((FloatOperation)floatfunptr)(p,q);  //call the floating function
        printf("The value is: %.3f\n", result1);  //print the result
    }
    else  //choice 0,1,2
    {
        int result = ((IntOperation)intfunptr)(a,b);  //call the integer function
        printf("The value is: %d\n",result);   //print the result
    }
    return 0;
}