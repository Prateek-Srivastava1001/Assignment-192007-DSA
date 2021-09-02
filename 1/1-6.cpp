/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Book{
    public:
        string title="";
        string author="";
        int noPages=0, price=0,noSoldCopies=0,totAmount=0;
        Book(string tit, string auth, int page, int pri, int sold)
        {
            title = tit;
            author = auth;
            noPages = page;
            price = pri;
            noSoldCopies = sold;
            totAmount = sold*price;
        }
        
        void display()
        {
            cout<<"\nTitle : "<<title;
            cout<<"\nAuthor : "<<author;
            cout<<"\nNumber of Pages : "<<noPages;
            cout<<"\nPrice : "<<price;
            cout<<"\nNo. of Sold Copies : "<<noSoldCopies;
            cout<<"\nTotal amount : "<<totAmount;
        }
};
vector<Book> arr;
void populate()
{
    string tit,auth;
    int page,pri,sold;
    cout<<"\nEnter title : ";
    cin>>tit;
    cout<<"\nEnter Author : ";
    cin>>auth;
    cout<<"\nEnter Number of Pages : ";
    cin>>page;
    cout<<"\nEnter Price : ";
    cin>>pri;
    cout<<"\nEnter No. of Sold Copies : ";
    cin>>sold;
    Book temp(tit,auth,page,pri,sold);
    arr.push_back(temp);
}
void read()
{
    int n = arr.size();
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\nDisplaying Book Number --> "<<i+1;
        arr[i].display();
    }
}

void maxPage()
{
    Book temp("","",0,0,0);
    int n = arr.size();
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i].noPages>temp.noPages)
        {
            temp = arr[i];
        }
    }
    cout<<"\nDisplaying book with maximum number of pages : ";
    temp.display();
}

void minCost()
{
    Book temp = arr[0];
    int n = arr.size();
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i].price<temp.price)
        {
            temp = arr[i];
        }
    }
    cout<<"\nDisplaying book with minimum cost : ";
    temp.display();
}

void earnings()
{
    int n = arr.size();
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i].totAmount;
    }
    cout<<"\nTotal Amount of money earned by selling books : "<<sum;
}

int main() {
    //Populating by creating array 
    int k;
    cout<<"\nHow many Data you want to enter : ";
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cout<<"\nDATA OF BOOK NUMMBER -->"<<i+1<<"\n";
        populate();
    }
    //Printing book array
    read();
    //Details of book with maximum Pages
    maxPage();
    //Details of book with minimum cost 
    minCost();
    //Total money earned by selling books
    earnings();
    return 0;
}
