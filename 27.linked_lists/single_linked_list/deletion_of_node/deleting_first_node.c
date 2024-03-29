//this program is to delete first node in the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief this function deletes the first node
struct node* del_first(struct node *head)
{
    if(head == NULL)
    {
        printf("List is already empty.\n");
    }
    else
    {
        //create ptr temp to access the first node
        struct node *temp = head;
        head = head->link;  //head node push to next node
        free(temp); //release the memory from the first node
        temp = NULL;    //assign NULL
    }
    return head;    //return head ptr
}

int main()
{
    //create the linked list
    //first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 73;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link->link = current;

    head = del_first(head); //call the function

    struct node *ptr = head;    //creating ptr to traverse the list

    //printing the data
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}