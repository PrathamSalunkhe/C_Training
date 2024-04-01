//this program is to check whether the given linked list is pallindrome or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *link;
};


/// @brief thiss function finds the middle of the list
/// @param head 
/// @return pointer to the middle element of the list
struct node* middle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while(fast!=NULL && fast->link!=NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    return slow;
}

/// @brief this function will reverse the list
struct node* reverse(struct node *head)
{
    //create two pointers. initially both are containing NULL
    struct node *prev = NULL;
    struct node *next = NULL;

    while(head != NULL)
    {
        next = head->link; //this ptr will access to next node
        head->link = prev;  //previous node will access
        prev = head;    //current node will pass to previous node
        head = next;    //next node will pass to current node
    }
    head = prev;    //current node access to (reversed)first node
    return head;
}

/// @brief this function checks the whole list and results hwether the list is pallindrome or not 
/// @param head 
/// @return true
bool pallindrome(struct node *head)
{
    if(head == NULL)
        return true;
    
    struct node *mid = middle(head);    //call the function to find the mid of the list
    struct node *last = reverse(mid->link); //call the function to reverse the list from middle

    struct node *current = head;

    //cheack each element from list 
    //first element = last element
    //second element = second last element
    //and so on....
    while(last != NULL)
    {
        if(last->data != current->data)
            return false;
        last = last->link;
        current = current->link;
    }
    return true;
}

int main()
{
    //create the linked list
    //first node
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    //second node
    struct node *current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    //third node
    current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link->link = current;

    //fourth node
    current = malloc(sizeof(struct node));
    current->data = 1;
    current->link = NULL;
    head->link->link->link = current;
    
    //print the original list
    printf("The linked list is: \n");
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
    int res=0;
    //call the function to check whether the list is pallindrome or not
    res = pallindrome(head);
    if(res)
    {
        printf("\nList is a pallindrome.\n");
    }
    else
    {
        printf("\nList is not a pallindrome.\n");
    }

    return 0;
}