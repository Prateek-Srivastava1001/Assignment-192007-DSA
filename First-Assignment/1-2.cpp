/* Roll No: 192007
Logic:
--> In this, I will take two loops, one from i=0 to n, other from j=i+1 to n
--> Create another array sol where number of occurences will be stored
--> When arr[i] = arr[j], increase the count and put -1 in sol[j] 
    which signifies that the number is already counted and no need to count in next iterations of i
--> Output the sol[] array where its value is not -1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,count;
    cout<<"\nEnter number of elements in array";
    cin>>n;
    int arr[n], sol[n];
    cout<<"\nEnter elements : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sol[i]=0;
    }
    //Calculating
    for(i=0;i<n;i++)
    {
        count = 1;
        if(sol[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    sol[j] = -1;
                }
            }
            sol[i] = count;
        }
    }
    //Output
    cout<<"\nOutput: \n";
    for(i=0;i<n;i++)
    {
        if(sol[i]!=-1)
        {
            cout<<"\nNumber : "<<arr[i]<<" Occurence : "<<sol[i];
        }
    }
    
	return 0;
}
