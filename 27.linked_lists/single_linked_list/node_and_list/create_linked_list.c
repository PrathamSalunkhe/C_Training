//this program is to create a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

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

    return 0;
}