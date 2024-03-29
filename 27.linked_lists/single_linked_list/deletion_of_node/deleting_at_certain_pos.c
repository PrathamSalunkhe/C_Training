//this program is to delete a node at certain position in the linked list

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

/// @brief this function deletes the node at certain position
/// @param head 
/// @param pos 
void del_pos(struct node **head, int pos)
{
    //create two pointers
    struct node *current = *head;
    struct node *previous = *head;

    if(head == NULL)
    {
        printf("The list is emptry.\n");
    }
    else if(pos == 1)   //if you have to delete first node
    {
        *head = current->link;  //push to second node
        free(current);  //release memory from first(current) node
        current = NULL; //assign NULL to it
    }
    else
    {
        while(pos != 1) //if you have to delete another node in the middle of the list
        {
            previous = current; //address of current node will stored in previous node
            current = current->link;    //current node will push to next
            pos--;  //this process will done until we reaches to that node
        }           //which we have to delete

        //after this, link the node which is next to deleted node to the previous node
        previous->link = current->link;

        free(current);  //release the memory from hte current node
        current = NULL; //assign NULL to current node
    }

}
int main()
{
    //create the linked list
    //first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

   /* //second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 38;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link->link = current;*/

    //call the function to add the new nodes at the end
    add_at_end(head,67);
    add_at_end(head,94);
    add_at_end(head,78);
    add_at_end(head,23);
    add_at_end(head,19);

    int position = 5;
    
    //call the function to delete the node at certain position
    //by passing the position and address of head
    del_pos(&head, position);

    struct node *ptr = head;

    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}