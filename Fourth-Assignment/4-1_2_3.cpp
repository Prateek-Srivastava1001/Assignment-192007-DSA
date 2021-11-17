#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node{
public:
    int data;
    node *left;
    node *right;
    node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
}*root;

void preorder(node *block)
{
    if(block!=NULL)
        cout<<block->data<<" ";
    if(block->left!=NULL)
        preorder(block->left);
    if(block->right!=NULL)
        preorder(block->right);
}

void postorder(node *block)
{
    if(block->left!=NULL)
        postorder(block->left);
    if(block->right!=NULL)
        postorder(block->right);
    if(block!=NULL)
        cout<<block->data<<" ";
}

void inorder(node *block)
{
    if(block->left!=NULL)
        inorder(block->left);
    if(block!=NULL)
        cout<<block->data<<" ";
    if(block->right!=NULL)
        inorder(block->right);
}

int main()
{
    
    return 0;
}