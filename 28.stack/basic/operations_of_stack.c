//this program is to perform some operations on stack

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack_arr[MAX]; //stack of arr is globally declared
int top = -1;

int isFull()
{
    if(top == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/// @brief this function will insert the elements onto the stack
/// @param data 
void push(int data)
{
    if(isFull())    //check whether the stack is full or not
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
    if(isEmpty())   //check whether the stack is empty or not
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack_arr[top];
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
    unsigned int choice;
    int data;

    while (1)
    {
        printf("\r\n************************************\r\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. QUit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        
        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;

        case 3:
            printf("The topmost element from the stack is %d\n", peek());
            break;

        case 4:
            print();
            break;

        case 5:
            exit(1);

        
        default:
            printf("Wrong Choice\n");
            break;
        }

    }
    return 0;
}