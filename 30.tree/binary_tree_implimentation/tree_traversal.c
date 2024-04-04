//this program is to perform the tree traversal of binary tree

#include <stdio.h>
#include <stdlib.h>

struct node {
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
    if(x == -1)         //base condition
    {
        return 0;
    }
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    printf("Enter left child of %d: ", x);
    newnode->left = create();               //recursive call to function
    printf("Enter right child of %d: ", x);
    newnode->right = create();              //recursive call to function

    return newnode;
}

/// @brief this function prints the data using preorder traversal of the binary tree
/// @param root 
void preorder(struct node *root)
{
    if(root == NULL)
    {
        return ;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

/// @brief this function prints the data using inorder traversal of the binary tree
/// @param root 
void inorder(struct node *root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/// @brief tthis function prints the data using postorder traversal of the binary tree
/// @param root 
void postorder(struct node *root)
{
    if(root == NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    int choice;
    struct node *root = malloc(sizeof(struct node));
    root = create();    //call the function to create binary tree
    printf("1.Inorder\n");
    printf("2.Preorder\n");
    printf("3.Postorder\n");
    printf("Enter the choice in which you have to print the binary tree: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        inorder(root);  //call the function for inorder traversal
        break;
    case 2:
        preorder(root); //call the function for preorder traversal
        break;
    case 3:
        postorder(root);    //call the function for postorder traversal
        break;
    default:
        break;
    }
    printf("\n");
}