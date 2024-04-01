//this program is to create a polynomial using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    float coefficient;
    int exponent;
    struct node *link;
};

/// @brief this function inserts the node at respective position
/// @param head 
/// @param co 
/// @param ex 
/// @return pointer to head node of whole list
struct node* insertnode(struct node *head, int co, int ex)
{
    struct node *temp;
    struct node *newP = malloc(sizeof(struct node));
    newP->coefficient = co;
    newP->exponent = ex;
    newP->link = NULL;

    if(head == NULL || ex > head->exponent)
    {
        newP->link = head;
        head = newP;
    }
    else
    {
        temp = head;
        while(temp->link != NULL && temp->link->exponent > ex)
        {
            temp = temp->link;
        }
        newP->link = temp->link;
        temp->link = newP;
    }
    return head;
}

/// @brief this function creates the nodes
struct node* create(struct node *head)
{
    int n;
    int i;
    float coeff;
    int expo;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter the coefficient for term %d: ", i+1);
        scanf("%f", &coeff);

        printf("Enter the exponent for term %d: ", i+1);
        scanf("%d", &expo);

        head = insertnode(head, coeff, expo);
    }
    return head;
}

/// @brief this function prints the linked list
/// @param head 
void print(struct node *head)
{
    if(head == NULL)
    {
        printf("No Polynomial.\n");
    }
    else
    {
        struct node *temp = head;
        while(temp != NULL)
        {
            printf("(%.1fx^%d)", temp->coefficient, temp->exponent);
            temp = temp->link;
            if(temp!=NULL)
            {
                printf("+");
            }
            else
            {
                printf("\n");
            }
        }
        
    }
}

int main()
{
    struct node *head = NULL;
    printf("Enter the polynomial.\n");
    head = create(head);
    print(head);
}