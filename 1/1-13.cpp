/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    int x,y,z,i,j,k;
    cout<<"\nEnter the dimensions of 3-D matrix (X,Y,Z) : ";
    cin>>x>>y>>z;
    int arr[x][y][z];
    //X--> Down, Y--> left-right, Z--> Forward-behind
    //Insertion
    cout<<"Enter Elements : \n";
    for(i=0;i<z;i++)
    {
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                cin>>arr[j][k][i];
            }
        }
    }
    
    //Searching
    cout<<"\nEnter the element to search : ";
    int ele,flag=0;
    cin>>ele;

    for(i=0;i<z;i++)
    {
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                if(ele==arr[j][k][i])
                {
                    cout<<"\nElement found at : \n";
                    cout<<"X-Index : "<<j+1<<" Y-Index : "<<k+1<<" Z-Index : "<<i+1;
                    flag = 1;
                }
            }
        }
    }
    if(flag==0)
    {
        cout<<"\nElement Not Found\n";
    }

    
    return 0;
}