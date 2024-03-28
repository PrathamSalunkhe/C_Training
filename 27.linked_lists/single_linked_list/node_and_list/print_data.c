//this program is to print the data from the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief function will accept the pointer to structure. 
/// @param head 
void print_data(struct node *head)
{
    if(head == NULL)
    {
        printf("The list is empty\n");
    }
    struct node *ptr = NULL;    //create aa pointer to traverse the list
    ptr = head;             //access the first node
    while(ptr!=NULL)    //loop will run till ptr contains NULL
    {
        printf("%d ", ptr->data);   //print hte data from each node
        ptr = ptr->link;    //ptr accessing each nodeby accessing link part
    }
    printf("\n");       //so, the o/p will be 45 9 67
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

    print_data(head);   //calling the function
}