/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    char line[1000],pattern[80],replace[80],word[80];
    string sol;
    int i,j,k,l;
    vector<int> pos;
    cout<<"Enter Sentence\n";
    cin.getline (line, 1000, '\n');//'\n' (new line) is delimeter
    cout<<"Enter pattern to find : ";
    cin.getline (pattern, 1000, '\n');//'\n' (new line) is delimeter
    cout<<"Enter Replacement to be done in the place of pattern: ";
    cin.getline (replace, 1000, '\n');//'\n' (new line) is delimeter
    i=0;j=0;
    k=strlen(pattern)-1;//i and k will make a window which we will need to compare
    int n=0;
    while(line[i+k]!='\0')
    {
        for(j=0;j<=k;j++)
        {
            word[j]=line[j+i];
        }
        word[k+1]='\0';
        if(string(word)==string(pattern))
        {
            pos.push_back(i);
            
        }
        n++;
        i++;
    }
    
    l = 0;
    for(i=0;i<n;i++)
    {
        if(i!=pos[l])
            sol.push_back(line[i]);
        else{
            l++;
            for(j=0;j<strlen(replace);j++)
            {
                sol.push_back(replace[j]);
            }
            i=i+k;
        }
    }

    cout<<"\nOUTPUT : \n"<<sol;
    return 0;
}