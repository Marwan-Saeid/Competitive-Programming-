#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    cin>>s;
    int counterc=0,counters=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        counters++;
        else if(s[i]>='A'&&s[i]<='Z')
        counterc++;
    }
    if(counterc>counters)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
            cout<<s[i];
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
            cout<<s[i];
        }
    }
    
    
    return 0 ;
}