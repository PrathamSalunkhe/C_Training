//this program is to delete the whole linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief this function will delete the whole list
struct node* del_list(struct node *head)
{
    struct node *temp = head;   //create ptr to traverse the list

    while(temp!=NULL)   //loop will run until temp contain NULL
    {   
        //init. both head and temp pointing to same node
        //then temp will access to next node
        temp = temp->link;  //temp will traverse the whole list
        free(head);     //due to which memory will be released from head node
        head = temp;    //at last temp will contain NULL. so, head also contains NULL.
    }                   //so, loop terminates
    return head;
}
int main()
{
    //create the linked list
    //first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 348;
    head->link = NULL;

    //second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 378;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 10370;
    current->link = NULL;
    head->link->link = current;

    head = del_list(head);

    //after execution of function, head will contain NULL
    //so, the whole linked list is deleted.
    if(head == NULL)
    {
        printf("Linked list is successfully deleted.\n");
    }
    return 0;
}