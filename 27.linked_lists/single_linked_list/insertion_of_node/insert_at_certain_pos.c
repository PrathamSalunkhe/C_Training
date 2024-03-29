//this program is to insert node at certain position in the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief this function creates the new node at the end
struct node* add_at_end(struct node *head, int data)
{
    struct node *ptr;   //this ptr created to traverse
    ptr = head;
    struct node *temp = malloc(sizeof(struct node));    //creating node
    temp->data = data;
    temp->link = NULL;

    while(ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;   //accesing to new node

    return temp;
}

/// @brief this function creates new node and add it to certain position in the list
/// @param head 
/// @param data 
/// @param pos 
void add_at_pos(struct node* head, int data, int pos)
{
    struct node *ptr = head;    //creating ptr to traverse

    struct node *ptr2 = malloc(sizeof(struct node));    //creating new node
    ptr2->data = data;
    ptr2->link = NULL;

    //this loop is for traversing the list, to add the node at certain position
    pos--;
    while(pos!=1)
    {
        ptr = ptr->link;
        pos--;
    }

    //ptr = ptr->link;    //ptr will point to next node

    ptr2->link = ptr->link; //new node accessing to last node

    ptr->link = ptr2;   //this node access to new node
}

int main()
{
    //creating head node
    struct node *head = malloc(sizeof(struct node));
    head->data = 35;
    head->link = NULL;

    //calling the function for adding node at the end
    add_at_end(head,67);
    add_at_end(head,94);
    add_at_end(head,78);
    add_at_end(head,23);
    add_at_end(head,19);

    int data = 50, position = 5;
    
    //calling function for adding node at certain position
    add_at_pos(head, data, position);

    //creating ptr for traversing the list
    struct node *ptr = head;

    //printing the data
    while(ptr!= NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}