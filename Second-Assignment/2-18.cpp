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
void delBeg()
{
    if(head==NULL)
        cout<<"\nEmpty list";
    else if(head->link==head)
    {
        node *temp;
        temp = head;
        head = NULL;
        delete temp;
    }
    else{
        node *temp;
        temp = head;
        while(temp->link!=head)
        {
            temp = temp->link;
        }
        temp->link = head->link;
        temp = head;
        head = head->link;
        delete temp;
    }
}
void delEnd()
{
    if(head==NULL)
        cout<<"\nEmpty list";
    else if(head->link==head)
    {
        node *temp;
        temp = head;
        head = NULL;
        delete temp;
    }
    else{
        node *temp,*prev;
        temp = head;
        prev = head;
        while(temp->link!=head)
        {
            prev = temp;
            temp = temp->link;
        }
        prev->link=head;
        delete temp;
    }
}
void delBet(int k)
{
    if(head==NULL)
        cout<<"\nEmpty list";
    else if(head->link==head)
    {
        node *temp;
        temp = head;
        head = NULL;
        delete temp;
    }
    else{
        node *temp, *prev;
        temp = head;
        prev = NULL;
        for(i=1;i<k;i++)
        {
            prev = temp;
            temp = temp->link;
        }
        if(temp==head)
        {
            delBeg();
        }
        else{
            prev->link = temp->link;
            delete temp;
        }
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