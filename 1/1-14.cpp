/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int m,n,i,j,num=0;
    cout<<"\nEnter Dimensions of 2-D matrix : ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"\nEnter Elements: \n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                num++;
            }
        }
    }

    if(num>m*n/2)
    {
        cout<<"\nGiven Matrix is Sparse Matrix\n";
    }
    else{
        cout<<"\nGiven Matrix is NOT Sparse Matrix\n";
    }


    return 0;
}