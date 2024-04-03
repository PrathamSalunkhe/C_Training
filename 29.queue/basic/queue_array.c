//this program is to underastand basics about queue data structure
//implimenting the queue by using ARRAY
#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

/// @brief this function enters the data into queue
/// @param x 
void enqueue(int x)
{
    if(rear == MAX-1)   //if queue is full
    {
        printf("Overflow\n");
        exit(1);
    }
    else if(front == -1 && rear == -1)  //if queue is empty
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else    //if queue contains one more element
    {
        rear++;
        queue[rear] = x;
    }
}

/// @brief this function prints the data
void display()
{
    int i;
    if(front == -1 && rear == -1)   //if queue is empty
    {
        printf("Underflow\n");
    }
    else 
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

/// @brief this function deletes the element
void dequeue()
{
    if(front == -1 && rear == -1)   //if queue is empty
    {
        printf("Underflow\n");
        exit(1);
    }
    else if(front == rear)  //if there is only one element
    {
        front = rear = -1;
    }
    else
    {
        printf("Deleted element is: %d\n", queue[front]);
        front++;
    }
}

int main()
{
    //call tihs function to enter the elements into queue
    enqueue(1);
    enqueue(2);
    enqueue(4);
    enqueue(7);
    enqueue(19);

    //call this function to print the data on the console
    display();

    //call this function to remove the element from the queue
    dequeue();

    display();
    dequeue();
    display();
}