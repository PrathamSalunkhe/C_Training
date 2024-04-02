//this program is to implement stack in an Array stack_arr,
//using stack_arr[0] as the topmost element

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack_arr[MAX];
int first = -1;

/// @brief this function check the stack is full or not
/// @return 1 if stack is full and 0 if stack is not full
int isFull()
{
    if(first == MAX-1)
        return 1;
    else
        return 0;
}

/// @brief this function check the stack is empty or not
/// @return 1 if stack is empty and 0 if stack is not empty
int isEmpty()
{
    if(first == -1)
        return 1;
    else
        return 0;
}

/// @brief this function inserts the element onto the stack
/// @param data 
void push(int data)
{
    int i;
    if(isFull())
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    first += 1;
    for(i=first;i>0;i--)
    {
        stack_arr[i] = stack_arr[i-1];
    }
    stack_arr[0] = data;
}

/// @brief this function removes the element from the stack
/// @return returns the deleted element
int pop()
{
    int i, value;
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack_arr[0];
    for(i=0;i<first;i++)
    {
        stack_arr[i] = stack_arr[i+1];
    }
    first -= 1;
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
    return stack_arr[0];
}

/// @brief this fdunction prints the data inside the stack
void print()
{
    int i;
    if(first == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    printf("data position\n");
    for(i=0;i<=first;i++) //loop will run from 0 (0 position)
    {
        printf("%d     %d\n", stack_arr[i], i);
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