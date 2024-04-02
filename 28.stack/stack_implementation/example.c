#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum size of the stack

// Define the structure for stack
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    stack->top = -1; // Set top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push element onto full stack\n");
        return;
    }
    stack->data[++stack->top] = element;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element from empty stack\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}

// Function to get the top element of the stack without popping it
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top];
}

int main() {
    // Declare and initialize a stack
    Stack stack;
    //printf("%ld\r\n", sizeof(Stack));
    initializeStack(&stack);

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Print the top element of the stack
    printf("Top element of the stack: %d\n", peek(&stack));

    // Pop elements from the stack and print them
    printf("Popped elements: ");
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");

    return 0;
}
