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
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = block;

    }

}
//Part a
void pointTok(int k,node *last)
{
    node *temp;
    temp = head;
    for(int i=1;i<k;i++)
    {
        if(temp = NULL){
            cout<<"\nList not long enough, connecting last node to head\n";
            last->link = head;
            return;
        }
        temp = temp->link;
    }
    last->link = temp;
    cout<<"\nSuccessfuly connected to "<<k<<"th node\n";
}
//Part b
void detectLastNode()
{//Using Floyd's Cycle Detection Algorithm
    node *slow, *fast;
    slow = head;
    fast = head;
    while(fast!=NULL&&fast->link!=NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
        if(slow==fast)
        {
            //it is circular
            node *temp = head;
            while(temp!=slow)
            {
                temp = temp->link;
                slow = slow->link;
            }
            //temp and slow pointing to starting of circle
            while(fast->link!=slow)
            {
                fast = fast->link;
            }
            //fast pointing to last node
            cout<<"\nThe last node contains : "<<fast->data;
        }
    }
    cout<<"\nList is linear\n";
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
    cout<<"\nWhich node index should the last node point to? : (Index of first element=1) ";
    cin>>d;
    pointToK(d,t);
    cout<<"\nThe Elements are : \n";
    show();


    return 0;
}