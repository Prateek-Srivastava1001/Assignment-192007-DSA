#include <bits/stdc++.h>
#include <string>
using namespace std;

struct employee
{
public:
  int Emp_id = 0;
  string Emp_name = "";
  string Emp_city = "";
  
  employee(int id, string name, string city)
  {
      Emp_id = id;
      Emp_name = name;
      Emp_city = city;
  }
  //For output of data
  void output()
  {
      cout<<"\n Emp_id : "<<Emp_id;
      cout<<"\n Emp_name : "<<Emp_name;
      cout<<"\n Emp_city : "<<Emp_city;
  }
};

vector <employee> arr;

//Creating the database of 5 employees
void create()
{
    int id,i;
    string name, city;
    for(i = 1;i<=5;i++)
    {
        cout<<"\nEntering Data "<<i<<" of 5 : \n";
        cout<<"\nEnter Emp_id : ";
        cin>>id;
        cout<<"\nEnter Emp_name : ";
        cin>>name;
        cout<<"\nEnter Emp_city : ";
        cin>>city;
        employee temp(id, name, city);
        arr.push_back(temp);
    }
}
//Searching
void search(int id)
{
    cout<<"\nSEARCHING\n";
    int i;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i].Emp_id == id)
        {
            arr[i].output();
            return;
        }
    }
    if(i==arr.size())
    {
        cout<<"\n Employee Not Found \n";
    }
}
//Sorting
void sort()
{
    cout<<"\nSORTING...\n";
    int i, j;
    int n = arr.size();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i].Emp_id>arr[j].Emp_id)
            {
                //swaping
                employee temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\nSORTING SUCCESSFUL\n";
}

//counting
void counting()
{
    cout<<"\nNumber of records = "<<arr.size();
}
//Adding 5 more records
void addMore()
{
    cout<<"\n ADDING 5 MORE RECORDS TO THE DATABASE \n";
    create();
}

int main() {
	create();
    int i;
    search(4);
    addMore();
    sort();
    counting();
    for(i=0;i<arr.size();i++)
    {
        cout<<"\nData of employee #"<<i+1<<" in the database";
        arr[i].output();
    }
	return 0;
}
