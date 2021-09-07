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
void insertBeg(node *block)
{
    if(head == NULL)
    {
        head = block;
    }
    else{
        block->fwd = head;
        head->back = block;
        head = block;
    }
}
void insertBet(node *block, int k)
{
    if(head == NULL)
    {
        head = block;
    }
    else if(k==1)
    {
        insertBeg(block);
    }
    else{
        node *temp;
        temp = head;
        for(int i=1;i<k-1;i++)
        {
            if(temp->fwd!=NULL)
            {
                temp = temp->fwd;
            }
            else{
                cout<<"\nList not long enough, inserting at end...\n";
                break;
            }
        }

        block->fwd = temp->fwd;
        block->back = temp;
        temp->fwd = block;
        if(temp->fwd!=NULL)
            block->fwd->back = block;


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

int main()
{
    int i,n,d,seq;
    node *t;
    cout<<"Enter how many elements you want in the linked list : ";
    cin>>n;
    cout<<"Enter Elements : ";
    
    for(i=0;i<n;i++)
    {
        cin>>d;
        cout<<"Where to insert? 0:Beginning, 1:End, 2:In Between : ";
        cin>>seq;
        if(seq==0)
        {
            node *t;
            t = create(d);
            insertBeg(t);
        }
        else if(seq==1)
        {
            node *t;
            t = create(d);
            insertEnd(t);
        }
        else{
            int k;
            cout<<"Enter the position to insert : ";
            cin>>k;
            t = create(d);
            insertBet(t,k);
        }
        
    }

    cout<<"\nThe Elements are : \n";
    show();

    return 0;
}