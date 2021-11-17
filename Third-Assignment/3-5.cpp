struct stack{void push();
char pop();
};
bool isEmpty(stack s);




bool checkValid(string s)
{
    stack s1,s2;
    int flag =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='X')
        {
            flag=1;
        }
        else if(flag==0)
        {
            s1.push();
        }
        else
        {
            s2.push();
        }

    }

    while(!isEmpty(s1))
    {
        char a,b;
        a=s1.pop();
        b=s2.pop();
        if(a!=b)
        return false;

    }
    if(!isEmpty(s2))
        return false;
    
    return true;
}