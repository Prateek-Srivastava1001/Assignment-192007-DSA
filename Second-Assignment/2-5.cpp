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
void nFromEnd(int n)
{
    int l=0,i;
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        temp = temp->link;
        l++;
    }

    if(l>=n)
    {
        int k = l-n;    //because n from last represents length-n from front
        int count = 0;
        temp = head;
        while(count<k)
        {
            count++;
            temp=temp->link;
        }
        cout<<"\n"<<n<<"th node from last in the list is : "<<temp->data;
        //Assuming counting (1) starts from last element itself
    }
    else{
        cout<<"\nList not long enough\n";
        return;
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
    cout<<"\nEnter the value of n : ";
    cin>>n;
    nFromEnd(n);


    return 0;
}