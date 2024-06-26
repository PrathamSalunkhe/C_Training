//this program is to perform some operations on stack

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack_arr[MAX]; //stack of arr is globally declared
int top = -1;   //initially stack is empty


/// @brief this function check the stack is full or not
/// @return 1 if stack is full and 0 if stack is not full
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

/// @brief this function check the stack is empty or not
/// @return 1 if stack is empty and 0 if stack is not empty
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

/// @brief this function peeks the topmost element from stack
/// @return return that element to the callee
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
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        return ;
    }
    printf("Elements in stack are: ");
    for(i=top;i>=0;i--)
    {
        printf("%d ", stack_arr[i]);
    }        
    printf("\n");                                                                                   
}


int main()
{
    int choice;
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

        //perform operations as per the choice
        if((choice>=1)&&(choice<=5))
        {
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
            choice = 0;
        }
        else
        {
            choice = 0;
            printf("Please enter a valid choice\n");
            break;
        }
    }
    return 0;
}