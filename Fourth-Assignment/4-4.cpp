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

void levelorder(node *block){
    queue<node> q;
    node *temp;
    q.push(block);

    while(!q.empty())
    {
        temp = q.pop();
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}

int main()
{

    return 0;
}