#include <bits/stdc++.h>
#include <string>
using namespace std;

//Essential Code
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


//Inserting at end
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

    cout<<"\nSuccessfuly inserted at end\n";

}
//Inserting at beginning
void insertBeg(node *block)
{
    if(head==NULL)
        head = block;
    else{
        block->link = head;
        head = block;
    }
    cout<<"\nSuccessfuly inserted at beginning\n";
}
//Inserting in between
void insertBet(node *block, int k)
{
    int i;
    if(head == NULL)
        head = block;
    else if(k==1)
        insertBeg(block);
    else{
        node *temp;
        temp = head;
        for(i=1;i<k-1;i++)
        {
            if(temp->link==NULL)
            {
                temp->link = block;
                cout<<"\nList not long enough, Hence inserted at end";
                return;
            }
            temp = temp->link;
        }
        block->link = temp->link;
        temp->link = block;
    }

    cout<<"\nInserted successfuly at position : "<<k<<"\n";
}

//display + driver code
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