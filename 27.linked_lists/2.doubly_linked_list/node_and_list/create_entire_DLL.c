//this program is to create an entire doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
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

/// @brief thi function will create node and add it to the end of the list
struct node* add_at_end(struct node *head, int data)
{
    struct node *tp;    //create pointer to traverse the list

    struct node *temp = malloc(sizeof(struct node));    //create node
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    tp = head;  //point to the first node 
    while(tp->next != NULL) //reach untill last node's next part
    {
        tp = tp->next;
    }

    tp->next = temp;    //assign new node to last node's next part
    temp->prev = tp;    //assign last node to new node's prev part

    return head;    //return head
}

struct node* createlist(struct node *head)
{
    int n, data, i;
    printf("Enter the number of nodes: ");  //ask user to enter no. of nodes
    scanf("%d", &n);

    if(n == 0)
        return head;

    printf("Enter the element for node 1: ");   //enter data for node 1
    scanf("%d", &data);
    head = addToEmpty(head, data);  //create node 1

    for(i=1;i<n;i++)
    {
        printf("Enter the element for node %d: ", i+1); //enter data for other nodes
        scanf("%d", &data);
        head = add_at_end(head, data);  //create other nodes
    }
    return head; //return head
}


int main()
{
    struct node *head = NULL;

    //to create teh list, call tihs function
    head = createlist(head);

    struct node *ptr = head;

    //print the data
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return 0;
}