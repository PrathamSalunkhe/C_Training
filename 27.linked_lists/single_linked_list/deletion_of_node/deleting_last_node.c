//this program is to delete last node in the linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/// @brief this function deletes the last node
struct node* del_last(struct node *head)
{
    if(head == NULL)    
    {
        printf("list is already empty.\n");
    }
    else if(head->link == NULL) //if list contain only one node
    {
        free(head);
        head = NULL;
    }
    else
    {   //we can delete the last node by using two methods
        //by taking 2 pointers and by taking only one pointer
        //by taking two pointers
        /*struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link!=NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;*/


        /*//by taking only one pointer
        struct node *temp = head;
        int count=0;
        while(temp->link != NULL)   //check the list until last node
        {
            temp = temp->link;  //push to the next node
            count++;            //increment count
        }
        //release the moemory from last node
        free(temp);
        temp = NULL;

        temp = head;    //assign ptr to head node 
        while(count!=1) 
        {
            temp = temp->link;  //from first node, push list to last node
            count--;
        }
        temp->link = NULL;  //assign NULL to last node link part*/
        
        
        //we can do this also..
        struct node *temp = head;
        while(temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
    return head;    //return the list
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
    current->data = 38;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;

    head->link->link = current;

    head = del_last(head);  //call the function

    struct node *ptr = head;    //create ptr to traverse the list

    //print the data
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}