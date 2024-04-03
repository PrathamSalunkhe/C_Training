//this program is to underastand basics about queue data structure
//implimenting the queue by using LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

/// @brief this function will enter the new node in the queue
/// @param x 
void enqueue(int x)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = NULL;

    if(front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
}

/// @brief this function prints the data of the queue
void display()
{
    struct node *temp;
    if(front == NULL & rear == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        temp = front;
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
    printf("\n");
}

/// @brief this function deletes the front node of the queue
void dequeue()
{
    struct node *temp;
    temp = front;
    if(front == NULL & rear == NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        front = front->link;
        free(temp);
        temp = NULL;
    }
}
int main()
{
    //call this function to enter the element into queue
    enqueue(10);
    enqueue(20);
    enqueue(30);

    //call this function to print the data
    display();

    //call this function delete the front element
    dequeue();
    display();
}