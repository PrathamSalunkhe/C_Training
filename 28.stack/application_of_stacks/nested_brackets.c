//this program is to understand the application of stack

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char stack[MAX];    //init stack
int top = -1;       

//declaration of functions
void push(char);
char pop();
int isEmpty();
int isFull();
int check_balanced(char*);
int match_char(char, char);

int main()
{
    char expr[MAX];
    int balanced;
    printf("Enter an algebraic expression: ");  //ask user to enter the algebraic expression
    //gets(expr);
    scanf("%[^\ns]", expr);

    //call the function to check the exp. is balanced or not
    balanced = check_balanced(expr);    
    if(balanced==1)
    {
        printf("Expression is Valid\n");
    }
    else
    {
        printf("Expression is Invalid\n");
    }
    return 0;
}

/// @brief this function checks the expression is balanced or not
/// @param s 
/// @return 1 if balanced and 0 if not balanced
int check_balanced(char *s)
{
    int i;
    char temp;
    for(i=0;i<strlen(s);i++)    //loop will run untill i reaches to end hcaracter of string
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            push(s[i]);
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if(isEmpty())
            {
                printf("Right brackets are more than left brackets.\n");
                return 0;;
            }
            else
            {   
                temp = pop();
                if(!match_char(temp, s[i]))
                {
                    printf("Mismatched brackets\n");
                    return 0;
                }
            }
        }
    }
    if(isEmpty())
    {
        printf("Brackets are well balanced.\n");
        return 1;
    }
    else
    {
        printf("Left brackets are more than right brackets.\n");
        return 0;
    }
}

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
/// @param c
void push(char c)
{
    if(isFull())    //check whether the stack is full or not
    {
        printf("Stack Overflow.\n");
        return;
    }
    top = top + 1;
    stack[top] = c;
}

/// @brief this function removes the elements from the stack
/// @return deleted element
char pop()
{
    char value;
    if(isEmpty())   //check whether the stack is empty or not
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    value = stack[top];
    top = top - 1;
    return value;
}

/// @brief this function matches both the brackets
/// @param a 
/// @param b 
/// @return 1 if brackets matched, 0 if not
int match_char(char a, char b)
{
    if(a=='[' && b==']')
        return 1;
    if(a=='{' && b=='}')
        return 1;
    if(a=='(' && b==')')
        return 1;
    return 0;
}