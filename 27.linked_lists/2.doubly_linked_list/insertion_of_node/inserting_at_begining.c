//this program is to insert a node in begining

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

/// @brief this fucntion creates the node in an empty list
struct node* addToEmpty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    head = temp;

    return head;
}

/// @brief this function creates the node and adds it to begining
struct node* add_beg(struct node *head, int data)
{
    //create node
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;  //assign head node to next part of temp node
    head->prev = temp;  //assign temp node to prev part of head node

    head = temp;    //assign temp to head. so, head will point to first node

    return head;
}

int main()
{
    struct node *head = NULL;
    head = addToEmpty(head, 25);    //call the function to create a node
    head = add_beg(head, 307);      //call the function to add node to begining

    struct node *ptr = head;

    //print the data
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}