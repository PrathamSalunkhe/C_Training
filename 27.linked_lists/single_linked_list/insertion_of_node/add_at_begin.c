//this program is to add the node in the linked list at begining

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief this function creates the node which we have to add
/// @param head 
/// @param data 
void add_beg(struct node **head, int data)
{
    //creating the node
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    //accesssing the head node at the link part of the new node
    temp->link = *head;

    //assigning that node to the first(head) node
    *head = temp;
}
int main()
{
    //creaitng first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 345;
    head->link = NULL;

    //creating second node
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 667;
    ptr->link = NULL;

    //first node is linked to second node
    head->link = ptr;

    int data = 784;

    add_beg(&head, data);   //here, address of head node are passed

    ptr = head;

    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}