#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node
{ 
public:
    int data; 
    struct node *fwd;
    struct node *back;
    node()
    {
        data = 0;
        fwd = NULL;
        back = NULL;
    }
}*head;

node * create(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->fwd = NULL;
    temp->back = NULL;
    return temp;
}
void insertEnd(node *block)
{
    if(head == NULL)
    {
        head = block;
        block->fwd = head;
        block->back = head;
    }
    else{
        node *temp;
        temp = head;
        while(temp->fwd!=head)
        {
            temp = temp->fwd;
        }
        temp->fwd = block;
        block->back = temp;
        block->fwd = head;
        head->back = block;

    }

}
void delEnd(){
    if(head==NULL)
    {
        cout<<"\nEmpty List\n";
    }
    else if(head->fwd = head)
    {
        node *temp = head;
        head = NULL;
        delete temp;
    }
    else{
        node *temp;
        temp = head;
        while(temp->fwd!=head)
        {
            temp = temp->fwd;
        }
        temp->back->fwd = head;
        head->back = temp->back;
    }
}

void show()
{
    if(head==NULL)
    {
        cout<<"\nList Empty\n";
    }
    else{
        node *temp;
        temp = head;
        cout<<"\nHead";
        cout<<" <--> "<<temp->data;
        temp = temp->fwd;
        while(temp->fwd!=head)
        {
            cout<<" <--> "<<temp->data;
            temp = temp->fwd;
        }
        cout<<" <--> Head\n";
    }
}

int main()
{
    int i,n,d;
    node *t;
    cout<<"Enter how many elements you want in the linked list : ";
    cin>>n;
    cout<<"Enter Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>d;
        t = create(d);
        insertEnd(t);
    }

    cout<<"\nThe Elements are : \n";
    show();

    return 0;
}