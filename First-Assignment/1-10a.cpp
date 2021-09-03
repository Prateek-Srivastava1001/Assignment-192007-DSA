/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n,i,k;
    cout<<"\nEnter number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the element you want to search : ";
    cin>>k;
    //Linear Search
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"\nElement found at index : "<<i+1;
            break;
        }
    }
    if(i==n)
    {
        cout<<"\nElement Not Found";
    }



    return 0;
}