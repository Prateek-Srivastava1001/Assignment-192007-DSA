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
    }
    else{
        node *temp;
        temp = head;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = block;

    }

}

void rev()
{
    if(head==NULL)
    {
        cout<<"\nEmpty list\n";
        return;
    }
    if(head->link==NULL)
    {
        cout<<"\nNo need to reverse, as there is only one element\n";
        return;
    }

    node *curr,*next,*oldHead;
    oldHead = head;
    curr = head->link;
    next = curr->link;

    while(curr!=NULL)
    {
        curr->link = head;
        head = curr;
        curr = next;
        if(curr!=NULL)
            next = curr->link;
    }
    oldHead->link = NULL;

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
            cout<<" --> "<<temp->data;
            temp = temp->link;
        }
    }
}
//Main function
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

    cout<<"\nREVERSING...\n";
    rev();
    cout<<"List afrer reversal : \n";
    show();


    return 0;
}