//this program is to create a node in doubly linked list

#include<stdio.h>
#include<stdlib.h>

//in doubly linked list each node has two pointers
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    //creatin node
    struct node *head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 47;
    head->next = NULL;

    printf("%d ", head->data);

    return 0;
}