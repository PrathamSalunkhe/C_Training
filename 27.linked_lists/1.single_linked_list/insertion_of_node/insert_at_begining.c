//this program is to insert the node in linked list at begining

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
/// @brief this function creates the node which we have to add
/// @return it returns the poinetr to the list
struct node* add_at_begin(struct node *head, int data)
{
    //creating the node
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    //accesssing the head node at the link part of the new node
    temp->link = head;

    //assigning that node to the first(head) node
    head = temp;
    
    return head;
}
int main()
{   //creaitng first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //creating second node
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 35;
    ptr->link = NULL;

    //first node is linked to second node
    head->link = ptr;

    int data = 98;  //init. data to be add

    //call the function by passing the pointer and value
    head = add_at_begin(head, data);

    ptr = head; //points to first node

    while(ptr!=NULL)    //printing the linked list
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}