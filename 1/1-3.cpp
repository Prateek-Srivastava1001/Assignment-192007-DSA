/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int fib(int n)
{
    //Base Conditions
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    //nth element = sum of previous two elements
    int ele=fib(n-1)+fib(n-2);
    return ele;
}

int main() {
    int n;
    cout<<"\nEnter the number : ";
    cin>>n;
    cout<<"\nElement number "<<n<<" in the fibonacci series is : "<<fib(n)<<"\n";
	return 0;
}
