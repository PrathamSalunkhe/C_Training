//this program is to insert a node after the given position in the list.

#include<stdio.h>
#include<stdlib.h>

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

/// @brief this function creates the node and adds it to begining
struct node* add_beg(struct node *head, int data)
{
    //create node
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    temp->next = head;  //assign head node to next part of temp node
    head->prev = temp;  //assign temp node to prev part of head node

    head = temp;    //assign temp to head. so, head will point to first node

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

struct node* add_at_pos(struct node *head, int data, int pos)
{
    struct node *newP = NULL;   //create newP ptr for new node
    struct node *temp = head;   //create ptr to traverse
    struct node *temp2 = NULL;  //create ptr to traverse

    newP = addToEmpty(newP, data);  //create new node to insert at position

    while(pos != 1) //run the loop till that position comes where we have to insert node
    {
        temp = temp->next;
        pos--; 
    }
    if(temp->next == NULL)  //at last node
    {
        //insert new node at end
        temp->next = newP;
        newP->prev = temp;
    }
    else
    {   
        //after we come to that position,

        temp2 = temp->next; //at this stage, both the traversal ptr points to consecutive node
        temp->next = newP;  //add new node to next part of temp node
        temp2->prev = newP; //add new node to prev part of temp2 node
        newP->prev = temp;  //replace prev and next values of new node to temp and temp2
        newP->next = temp2; //respectively
    }
    return head;    //return the heads
}
int main()
{
    struct node *head = NULL;

    head = addToEmpty(head, 912);   //call the function to create a node
    head = add_beg(head, 523);      //call the function to add node at begining
    head = add_at_end(head, 472);   //call the function to add node at end

    int position = 2;
    head = add_at_pos(head, 299, position);//call the function to add node at certain position

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