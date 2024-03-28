//this program is to understand how to create a node in linked list

#include<stdio.h>
#include<stdlib.h>

//create node using self referential structure
//which contains the pointer pointing to the structure of same type
struct node{
    int data;
    struct node *link;
};

int main()
{
    //initialize pointer pointing to the struct.
    // so that, it will access to the members of the structure
    struct node *head = NULL;   

    head = (struct node *)malloc(sizeof(struct node));   //allocate memory to the pointer

    head->data = 45;    //assign value to the pointer
    head->link = NULL;

    printf("%d \n", head->data);    //print the value
    return 0;
}