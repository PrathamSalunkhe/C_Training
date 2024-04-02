//this program is to cnvert the decimal number into binary number by using stack

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

/// @brief this function check the stack is full or not
/// @return 1 if stack is full and 0 if stack is not full
int isFull()
{
    if(top == MAX-1)
        return 1;
    else
        return 0;
}

/// @brief this function check the stack is empty or not
/// @return 1 if stack is empty and 0 if stack is not empty
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

/// @brief this function inserts the element onto the stack
/// @param data 
void push(int n)
{
    int i;
    if(isFull())
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    top++;
    stack[top] = n;
}

/// @brief this function removes the element from the stack
/// @return returns the deleted element
int pop()
{
    int value;
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack[top];
    top--;
    return value;
}

/// @brief this function converts the decimal number into binary number
/// @param num 
void dec2bin(int num)
{
    while(num != 0)
    {
        push(num%2);
        num = num/2;
    }
}

/// @brief prints the data
void print()
{
    if(isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    while(!isEmpty())
    {
        printf("%d", pop());
    }
    printf("\n");
}

int main()
{
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d", &dec);

    //call the function to convert decimal to binary
    dec2bin(dec);

    print();    //call the function to print the data
    
    return 0;
}