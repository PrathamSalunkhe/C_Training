//this program is for implimentation of binary tree 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

/// @brief this function creates the node according to the tree
struct node* create()
{
    int x;
    struct node *newnode = malloc(sizeof(struct node));
    printf("Enter data for newnode(-1 for no node): ");
    scanf("%d", &x);
    if(x == -1)
    {
        return 0;
    }
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    printf("Enter left child of %d: ", x);
    newnode->left = create();
    printf("Enter right child of %d: ", x);
    newnode->right = create();

    return newnode;
}
int main()
{
    struct node *root = NULL;
    root = create();    //call the function to create binary tree
    printf("Function called\n");
}