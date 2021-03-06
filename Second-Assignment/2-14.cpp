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
        cout<<" --> "<<temp->data;
            temp = temp->link;
        while(temp->link!=head)
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