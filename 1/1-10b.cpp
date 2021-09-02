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
    cout<<"\nEnter the elements (In Sorted Form) : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the element you want to search : ";
    cin>>k;
    //Binary Search
    int start=0;
    int last=n-1;
    int mid=(start+last)/2;

    while(start<=last)
    {
        mid=(start+last)/2;
        if(arr[mid]==k)
        {
            cout<<"\nElement found at index : "<<mid+1;
            break;
        }
        else if(arr[mid]<k)
        {
            start = mid+1;
        }
        else
        {
            last = mid-1;
        }
    }
    if(start>last)
    {
        cout<<"\nElement Not Found\n";
    }
    



    return 0;
}