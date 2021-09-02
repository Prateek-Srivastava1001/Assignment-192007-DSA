/*
Roll No. 192007
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cout<<"\nEnter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *start = &arr[0];
    int *end = &arr[n-1];
    while(start<end)
    {
        *start = *start+*end;
        *end = *start-*end;
        *start = *start-*end;
        start++;
        end--;
    }
    cout<<"\nReversal Successful, Output : \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
