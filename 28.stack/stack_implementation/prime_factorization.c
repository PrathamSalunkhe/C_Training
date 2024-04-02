//this program is to find the prime factorization a number using stack

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

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

/// @brief this function finds the prime factors of the given number
/// @param num 
void prime_fact(int num)
{
    int i=2;

    while(num!=1)
    {
        while(num%i==0)
        {
            push(i);    //store all the factors inside the stack
            num = num/i;
        }
        i++;
    }

    //print all the factors
    printf("Prime factors of number in descending order are: ");
    while(top != -1)
    {
        printf("%d ", pop());   //remove each element from the stack and print on the consol 
    }
    printf("\n");
}

int main()
{
    int number;

    //ask user to enter a positive number
    printf("Enter a positive number: ");
    scanf("%d", &number);

    prime_fact(number); //call the function to find the prime factors
    return 0;
}