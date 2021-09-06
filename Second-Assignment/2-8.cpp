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
void oddEven(){
    node *tem1, *tem2, *temp;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            //even
            if(h1 == NULL)
            {
                h1=temp;
                tem1 = h1;
            }
            else{
                tem1->link = temp;
                tem1 = tem1->link;
            }
            
        }
        else{
            //odd
            if(h2 == NULL)
            {
                h2=temp;
                tem2 = h2;
            }
            else{
                tem2->link = temp;
                tem2 = tem2->link;
            }
        }
        temp = temp->link;
    }

    tem1->link = h2;
    tem2->link = NULL;
    head = h1;

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

    cout<<"\nGetting even numbers to the begenning...\n";
    oddEven();
    cout<<"\nThe Elements are : \n";
    show();

    return 0;
}