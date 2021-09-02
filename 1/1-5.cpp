/*
Roll No. 192007
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    char line[1000];
    char toDelete[80],word[80];
    int i,j,n=0,m;
    cout<<"\nEnter String : ";
    cin.getline (line, 1000, '\n');//'\n' (new line) is delimeter
    cout<<"\nEnter Word to be deleted : ";
    cin>>toDelete;
    n = strlen(toDelete);
    m = strlen(line);
    
    char *st = line;
    char *en = line;
    i=0;
    j=0;
    while(*en!='\0')
    {
        if(*en==' ')
        {
            word[i] = '\0';
            if(string(word) == string(toDelete))//if we found the right word to be deleted
            {
                j=0;
                //shift
                *en++; //Because end pointer is at a space
                while(*(en+j)!='\0')
                {
                    *(st+j)=*(en+j);//shifting the contents from end pointer to starting pointer
                    j++;
                }
                m=m-n-1;
                line[m]='\0';
                en = st;//As the word is deleted, end and start are at same point
            }
            else{
                st = en+1;//we traversed the word, so starting will move
                en++;// as we needed to increment end pointer in the above condition, this line will ve repeated in else condition
            }
            strcpy(word," ");
            i=0;
            
            
        }
        else
        {
            //Populating the word
            word[i] = *en;
            i++;
            en++;
        }
        
        
    }
    cout<<"\nLine after deleting : "<<line;
    return 0;
}
