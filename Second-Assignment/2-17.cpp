#include <bits/stdc++.h>
#include <string>
using namespace std;

struct node
{ 
public:
    int data; 
    struct node *link;
    node()
    {
        data = 0;
        link = NULL;
    }
}*head;

node * create(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void insertEnd(node *block)
{
    if(head == NULL)
    {
        head = block;
        head->link = head;
    }
    else{
        node *temp;
        temp = head;
        while(temp->link!=head)
        {
            temp = temp->link;
        }
        temp->link = block;
        block->link = head;

    }

}
void insertBeg(node *block)
{
    insertEnd();
    head = block;
    cout<<"\nSuccessfuly inserted at beginning\n";
}
void insertBet(node *block, int k)
{
    int i;
    if(head == NULL)
    {
        head = block;
        head->link = head;
    }
    else if(k==1)
        insertBeg(block);
    else{
        node *temp;
        temp = head;
        for(i=1;i<k-1;i++)
        {
            if(temp->link==head)
            {
                temp->link = block;
                cout<<"\nList not long enough, Hence inserting at end";
                return;
            }
            temp = temp->link;
        }
        block->link = temp->link;
        temp->link = block;
    }

    cout<<"\nInserted successfuly at position : "<<k<<"\n";
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
        while(temp!=head)
        {
            cout<<" --> "<<temp->data;
            temp = temp->link;
        }
        cout<<" --> Head\n";
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