//this program is to add a node to empty list

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node* addToEmpty(struct node *head, int data)
{
    //creating node
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    
    //assign that node to head
    head = temp;

    //return head
    return head;
}
int main()
{
    struct node *head = NULL;
    head = addToEmpty(head, 30);    //calling the function to add the node
    printf("%d\n", head->data);     //printing tha data

    return 0;
}