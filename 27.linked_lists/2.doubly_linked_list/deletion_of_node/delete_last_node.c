//this program is to delete last node of doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
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

struct node* del_last(struct node *head)
{
    struct node *temp = head;   //temp will point to first node
    struct node *temp2;

    while(temp->next != NULL)   //traverse the whole list
    {
        temp = temp->next;
    }
    temp2 = temp->prev; //access to 2nd last node
    temp2->next = NULL; //assign NULL to next part of 2nd last node
    free(temp); //release memory from last node
    
    return head;
}

/// @brief tihs function prints the linked list
/// @param head 
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = NULL;

    head = addToEmpty(head, 348);   //call the function to add first node to empty list
    head = add_at_end(head, 283);   //call function to add other nodes
    head = add_at_end(head, 905);

    printf("Before Deletion: \n");
    print(head);    //call print function to print the data

    head = del_last(head);  //call delete function to delete the first node
    printf("\nAfter Deletion: \n");
    print(head);    //call print function to print the data
    printf("\n");
    return 0;
}