//this program is to understand the basic about stack
//to insert the element onto the stack
//to remove the element from the stack
//to print the element of the stack

#include<stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX]; //stack of arr is globally declared
int top = -1;

/// @brief this function will insert the elements onto the stack
/// @param data 
void push(int data)
{
    if(top == MAX-1)    //check whether the stack is full or not
    {
        printf("Stack Overflow.\n");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}

/// @brief this function removes the elements from the stack
/// @return 
int pop()
{
    int value;
    if(top == -1)   //check whether the stack is empty or not
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

/// @brief this function prints the elements in the stack
void print()
{
    int i;
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return ;
    }
    printf("Remaining elements in stack are: ");
    for(i=top;i>=0;i--)
    {
        printf("%d ", stack_arr[i]);
    }        
    printf("\n");                                                                                   
}

int main()
{
    int data1, data2;
    //call the function to isert the element onto the stack
    push(1);
    push(2);
    push(3);
    push(4);

    //call the function to remove the elments from stack
    data1 = pop();
    data2 = pop();
    printf("Deleted elements are: %d, %d\n", data1, data2);
    
    //call the function to print the elements in the stack
    print();
    return 0;
}


