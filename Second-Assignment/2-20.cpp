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
};
node *head,*h1,*h2;

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

void show(node *h)
{
    if(h==NULL)
    {
        cout<<"\nList Empty\n";
    }
    else{
        node *temp;
        temp = h;
        cout<<"\nHead";
        //Initially, temp=h
        cout<<" --> "<<temp->data;
        temp = temp->link;
        while(temp!=h)
        {
            cout<<" --> "<<temp->data;
            temp = temp->link;
        }
        cout<<" --> Head\n";
    }
}

void split(int n)
{
    node *temp;
    int k;
    if(n%2==0)
        k = n/2;
    else
        k = n/2 + 1;
    if(n==1)
    {
        h1 = head;
        h2 = NULL;
    }
    else{
        h1 = head;
        h2 = head;
        temp = NULL;
        for(int i = 0; i<k; i++)
        {
            temp = h2;
            h2 = h2->link;
        }
        temp->link = head;
        //second list
        temp = h2;
        while(temp->link!=head)
        {
            temp = temp->link;
        }
        temp->link = h2;
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
    show(head);
    cout<<"\nSplitting...\n";
    split(n);
    cout<<"\nAfter Splitting, the first list : \n";
    show(h1);
    cout<<"\nAfter Splitting, the second list : \n";
    show(h2);


    return 0;
}