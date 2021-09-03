/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int n,i,j;
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    int arr[n];
    vector<int> sol;
    cout<<"\nEnter Elements (only positive integers) : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]!=-1)
        {
            sol.push_back(arr[i]);
        }
    }

    cout<<"\nAfter removing duplicate occurrences, array : \n";
    for(auto k:sol)
    {
        cout<<k<<" ";
    }





    return 0;
}