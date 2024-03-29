//this program to reverse the whole linked list

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

/// @brief this function will reverse the list
struct node* reverse(struct node *head)
{
    //create two pointers. initially both are containing NULL
    struct node *prev = NULL;
    struct node *next = NULL;

    while(head != NULL)
    {
        next = head->link; //this ptr will access to next node
        head->link = prev;  //previous node will access
        prev = head;    //current node will pass to previous node
        head = next;    //next node will pass to current node
    }
    head = prev;    //current node access to (reversed)first node
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

    //fourth node
    current = malloc(sizeof(struct node));
    current->data = 2539;
    current->link = NULL;
    head->link->link->link = current;
    
    //print the original list
    printf("Before Reversing: \n");
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
    //call the function to reverse the list
    head = reverse(head);

    //print the reverse list
    printf("\nAfter Reversing: \n");
    struct node *temp = head;
    while(temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
    return 0;
}