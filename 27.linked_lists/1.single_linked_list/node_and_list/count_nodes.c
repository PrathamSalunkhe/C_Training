//this program is to count no. of nodes in the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};


/// @brief function will accept the pointer to linked list. 
/// @param head 
void count_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
    {
        printf("Linked list is empty\n");
    }
    struct node *ptr = NULL;    //create one pointer to traverse the list
    ptr = head; //access to the first node
    while(ptr!=NULL)    //loop will run till ptr contains NULL
    {
        count++;
        ptr = ptr->link;    //ptr accessing each nodeby accessing link part
    }
    printf("There are %d nodes in the list.\n", count); //o/p will be 3 nodes
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

    count_nodes(head);  //calling the function
}