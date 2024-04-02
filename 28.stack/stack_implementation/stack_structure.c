//this program is to create stack using structure

#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

typedef struct {
    int data[MAX];
    int top;
} Stack;

/// @brief this function creates an empty stack
/// @param stack 
void initStack(Stack *stack)
{
    stack->top = -1;   
}


/// @brief this function checks the stack is full or not
/// @param stack 
/// @return 1 if stack is full
int isFull(Stack *stack)
{
    if(stack->top == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


/// @brief this function checks the stack is empty or not
/// @param stack 
/// @return 1 if stack is empty
int isEmpty(Stack *stack)
{
    if(stack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/// @brief this function push the elements into the stack
/// @param stack 
/// @param val 
void push(Stack *stack, int val)
{
    if(isFull(stack))
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    ++stack->top;
    stack->data[stack->top]= val;
}

/// @brief this function removes the elements from the stack
/// @param stack 
/// @return deleted elements
int pop(Stack *stack)
{
    int value;
    if(isEmpty(stack))
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack->data[stack->top];
    stack->top--;

    return value;
}

/// @brief this function prints the stack data
/// @param stack 
void print(Stack *stack)
{
    
    int i;
    if(isEmpty(stack))
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    while(!isEmpty(stack))
    {
        printf("The elements of stack are: %d\n", pop(stack)); 
    }   //call this function to remove the element from the stack and print on the consol
    
}

int main()
{
    //create a ptr to point to the stack struct
    Stack *stack = malloc(sizeof(Stack));
    //printf("%ld\r\n", sizeof(Stack));
    initStack(stack);   //call this function to initialize an empty stack
    
    //call this function to push the elements into stack
    push(stack, 10);
    push(stack, 100);
    push(stack, 1000);
    
    //call this function to print the stack data
    print(stack);

    //release the memory from the stack
    free(stack);

    return 0;
}