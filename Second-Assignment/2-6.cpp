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
}*h1, *h2;

node * create(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    return temp;
}

void insertEnd1(node *block)
{
    if(h1 == NULL)
    {
        h1 = block;
        
    }
    else{
        node *temp;
        temp = h1;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = block;
    
    }

}

void insertEnd2(node *block)
{
    if(h2 == NULL)
    {
        h2 = block;
        
    }
    else{
        node *temp;
        temp = h2;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = block;
    
    }

}

void show(node *head)
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

void printCommon()
{
    node *tem1, *tem2;
    tem1 = h1;
    tem2 = h2;
    node *res;
    cout<<"\nCommon elements are : \n";
    while(tem1!=NULL && tem2!=NULL)
    {
        if(tem1->data==tem2->data)
        {
            cout<<tem1->data<<" ";
            tem1 = tem1->link;
            tem2 = tem2->link;
        }
        else if(tem1->data > tem2->data)
        {
            tem2 = tem2->link;
        }
        else{
            tem1 = tem1->link;
        }
    }

}

int main()
{
    int i,n,d;
    node *t;
    cout<<"Enter how many elements you want in first linked list : ";
    cin>>n;
    cout<<"Enter Elements : (IN ASCENDING ORDER) ";
    for(i=0;i<n;i++)
    {
        cin>>d;
        t = create(d);
        insertEnd1(t);
    }

    cout<<"\nThe Elements are : \n";
    show(h1);

    cout<<"\nEnter how many elements you want in second linked list : ";
    cin>>n;
    cout<<"Enter Elements : (IN ASCENDING ORDER) ";
    for(i=0;i<n;i++)
    {
        cin>>d;
        t = create(d);
        insertEnd2(t);
    }

    cout<<"\nThe Elements are : \n";
    show(h2);

    printCommon();

    return 0;
}