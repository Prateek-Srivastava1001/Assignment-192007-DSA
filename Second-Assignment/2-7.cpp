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
}*head,*h1,*h2;

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
        while(temp!=NULL)
        {
            cout<<" --> "<<temp->data;
            temp = temp->link;
        }
    }
}

void merge()
{
    node *tem1, *tem2, *temp;
    tem1 = h1;
    tem2 = h2;

    while(tem1!=NULL && tem2!=NULL)
    {
        if(tem1->data == tem2->data)
        {
            if(head==NULL)
            {
                head = tem1;
                temp = head;
            }
            else{
                temp->link = tem1;
                temp = temp->link;
            }
            tem1 = tem1->link;
            tem2 = tem2->link;

        }
        else if(tem1->data > tem2->data)
        {
            if(head==NULL)
            {
                head = tem2;
                temp = head;
            }
            else{
                temp->link = tem2;
                temp = temp->link;
            }
            tem2 = tem2->link;
        }
        else{
            if(head==NULL)
            {
                head = tem1;
                temp = head;
            }
            else{
                temp->link = tem1;
                temp = temp->link;
            }
            tem1 = tem1->link;
        }

    }

    while(tem1!=NULL)
    {
        temp->link = tem1;
        temp = temp->link;
        tem1 = tem1->link;
    }
    while(tem2!=NULL)
    {
        temp->link = tem2;
        temp = temp->link;
        tem2 = tem2->link;
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
    cout<<"\nAfter merging...\n";
    merge();
    show(head);

    return 0;
}