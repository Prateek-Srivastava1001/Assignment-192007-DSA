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
    }
    else{
        node *temp;
        temp = head;
        while(temp->fwd!=NULL)
        {
            temp = temp->fwd;
        }
        temp->fwd = block;
        block->back = temp;

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
        while(temp!=NULL)
        {
            cout<<" <--> "<<temp->data;
            temp = temp->fwd;
        }
    }
}

void delBeg()
{
    if(head==NULL)
    {
        cout<<"\nList Empty\n";
    }
    else{
        node *temp;
        temp = head;
        head = head->fwd;
        if(head!=NULL)
            head->back = NULL;
        delete temp;
    }
}
void delEnd()
{
    if(head==NULL)
    {
        cout<<"\nList Empty";
    }
    else{
        node *temp;
        temp = head;
        while(temp->fwd!=NULL)
        {
            temp = temp->fwd;

        }
        temp->back->fwd = NULL;
        delete temp;
    }
}
void deleteBet(int k){
    if(head==NULL)
    {
        cout<<"\nList Empty";
    }
    else{
        if(k==1)
            delBeg();
        node *temp;
        temp = head;
        for(int i = 1;i<k;i++)
        {
            temp = temp->fwd;
        }
        temp->back->fwd = temp->fwd;
        if(temp->fwd!=NULL)
            temp->fwd->back = temp->back;
        delete temp;
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