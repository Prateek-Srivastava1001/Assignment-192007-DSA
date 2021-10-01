#include <bits/stdc++.h>
#include <string>
using namespace std;

int arr[10],top = -1;
int IsEmptyStack(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int IsFullStack(){
    if(top==9)
        return 1;
    else
        return 0;
}
void push(int ele){
    if(IsFullStack()==1)
        cout<<"Stack is full, cannot Insert more\n";
    else{
    top++;
    arr[top] = ele;
    cout<<"Inserted Successfuly\n";
    }
}
int pop(){
    if(IsEmptyStack()==1)
    {
        cout<<"Empty Stack";
        return -1;
    }
    else{
        int ele = arr[top];
        top--;
        return ele;
    }
    
}
int Top(){
    int t = arr[top];
    return t;
}
int size(){
    int s = top+1;
    return s;
}


int main(){
    int i;
    for(i = 0;i<11;i++)
    {
        cout<<"Enter element to be inserted : ";
        int ele;
        cin>>ele;
        push(ele);
    }
    cout<<"\nSize of stack is : "<<size();
    for(i = 0; i<5;i++)
    {
        int ele = pop();
        cout<<"\nPopped :"<<ele;
    }
    cout<<"\nSize of stack is : "<<size();
    cout<<"\nTop element in the stack is : "<<Top();
    if(IsEmptyStack()==1)
    {
        cout<<"\nStack is empty";
    }
    return 0;
}
