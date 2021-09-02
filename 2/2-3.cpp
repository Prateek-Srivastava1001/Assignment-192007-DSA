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
void del(int k)
{
    node *p;
    p = head;
    if(head==NULL){
        cout<<"\nList Empty";
        return;
    }
    if(k == 1)
    {
        head = head->link;
        delete p;
    }
    for(int i = 1;i<k-1;i++)
    {
        if(p->link!=NULL)
            p = p->link;
        else
        {
            cout<<"\nList not long enough\n";
            return;
        }
    }
    if(p->link!=NULL)
    {
        node *temp = p->link;
        p->link = temp->link;
        delete temp;
        cout<<"Deleted Succssfuly\n";
    }
    else{
        cout<<"\nList not long enough\n";
        return;
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
            cout<<" --> "<<temp->data;
            temp = temp->link;
        }
    }
}
//main function
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

    cout<<"Do you want to delete any element? 0/1 : ";
    cin>>d;
    while(d!=0)
    {
        cout<<"\nEnter location of element to be deleted : ";
        cin>>d;
        del(d);
        cout<<"Do you want to delete any element? 0/1 : ";
        cin>>d;
    }
    cout<<"\nList after deletion : \n";
    show();
    return 0;
}