#include<stdio.h>
// void inorder()

struct Node{
int data;
struct Node *left;
struct Node *right;
};


void inorder(struct Node* root)
{

    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
}
int  main()
{
    // return 0;
}