//this porgram is to add the node at end

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};
/// @brief this function accepts the ptr and data
/// @param ptr, data
/// @return pointer to the list
struct node* add_at_end(struct node *ptr,int  data)
{
    struct node *temp = malloc(sizeof(struct node));    //creating node which have to add
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;   //adding node to the end
    return temp;
}

int main()
{
    struct node *head = NULL;   //creating first node which is pointed by head pointer
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *ptr = head;    //creating pointer ptr, it is pointing to first node
    ptr = add_at_end(ptr, 93);  //calling the function by passing ptr and data
    ptr = add_at_end(ptr, 54);  //calling the function by passing ptr and data
    ptr = add_at_end(ptr, 29);  //calling the function by passing ptr and data

    ptr = head; //pointer pointing to head(to first node)

    //printing the data
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
    return 0;
}