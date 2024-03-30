//this program is to delete first node of doubly linked list

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

struct node* delfirst(struct node *head)
{
    struct node *temp = head;   //temp will point to first node
    head = head->next;  //head points to 2nd node
    free(temp); //realease memory from first node
    temp = NULL;    //assign NULL to first node
    head->prev = NULL;  //assign NULL to prev part of head node

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

    head = delfirst(head);  //call delete function to delete the first node
    printf("\nAfter Deletion: \n");
    print(head);    //call print function to print the data
    printf("\n");
    return 0;
}