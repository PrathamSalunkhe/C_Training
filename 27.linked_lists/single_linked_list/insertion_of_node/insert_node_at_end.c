//this program is to insert the node at the end of the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void insert_at_end(struct node *head, int data)
{
    struct node *temp, *ptr;
    ptr = head;

    temp = malloc(sizeof(struct node));
    temp->data = 91;
    temp->link = NULL;

    while(ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    struct node *head = NULL;   //creating first node
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 67;
    current->link = NULL;

    head->link->link = current;

    insert_at_end(head, 91);   //calling the function
}