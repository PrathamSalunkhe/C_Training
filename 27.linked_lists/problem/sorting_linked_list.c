//this program is to sorting of the singly linked list

#include <stdio.h>
#include <stdlib.h>

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

struct node* sort(struct node *ptr)
{
    struct node *i, *j;
    int temp;

    for(i=ptr; i->link!=NULL; i = i->link)
    {
        for(j=i->link; j!=NULL; j=j->link)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return ptr;
}

/// @brief this function prints the even and odd numbers from the list
/// @param ptr 
void even_odd(struct node *ptr)
{
    struct node *temp = ptr;
    printf("Even numbers are: \r\n");
    while(temp != NULL)
    {
        if((temp->data)%2 == 0)
        {
            printf("%d ", temp->data);
            //temp = temp->link;
        }
        temp = temp->link;
    }
    temp = ptr;
    printf("\nOdd numbers are: \r\n");
    while(temp != NULL)
    {
        if((temp->data)%2 != 0)
        {
            printf("%d ", temp->data);
            //temp = temp->link;
        }
        temp = temp->link;
    }
    printf("\n");
}

/// @brief this function prints the linked list
/// @param head 
void print(struct node *head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
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
    ptr = add_at_end(ptr, 52);
    ptr = add_at_end(ptr, 34);

    ptr = head; //pointer pointing to head(to first node)

    //printing the data
    printf("Before Sorting: \n");
    print(ptr); //call function to print the list
    printf("\n");

    ptr = head; //point to first node

    ptr = sort(ptr);    //call the function to sort the list

    printf("After Sorting: \n");
    print(ptr); //call function to print the list
    printf("\n");

    ptr = head;

    even_odd(ptr);

    return 0;
}