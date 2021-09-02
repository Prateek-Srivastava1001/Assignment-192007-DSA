/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    //For both multiplication and addition to be possible, square matrix should be there
    int n,i,j,k;
    cout<<"\nEnter the dimension of square matrix : ";
    cin>>n;
    int f[n][n],s[n][n],add[n][n],mul[n][n];
    cout<<"\nEnter first array\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>f[i][j];
        }
    }
    cout<<"\nEnter second array\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }

    //Addition
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j] = f[i][j] + s[i][j];
        }
    }
    //Multiplication
    int sum=0;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            
            sum = 0;   
            for(k=0;k<n;k++)
            {
                
                sum += f[i][k]*s[k][j];
            }
            mul[i][j] = sum;
        }
    }

    cout<<"\nADDITION : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nMULTIPLICATION : \n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}