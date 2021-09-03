/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    cout<<"Start entering the data\n";
    int i,j;
    char first[80],middle[80],last[80],number[80],sol[640];
    while(cin>>last)
    {
        cin>>first>>middle>>number;
        i=0;j=0;
        while(last[i]!='\0')
        {
            sol[j]=last[i];
            i++;
            j++;
        }
        sol[j]=',';
        sol[j+1]=first[0];
        sol[j+2]='.';
        sol[j+3]=middle[0];
        sol[j+4]=' ';
        j=j+5;
        i=0;
        while(number[i]!='\0')
        {
            sol[j]=number[i];
            i++;
            j++;
        }
        sol[j]='\0';
        cout<<sol<<"\n\n";
    }

    return 0;
}