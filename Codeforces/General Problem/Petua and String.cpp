#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s,c;
    cin>>s>>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        s[i]=s[i]-32;
        if(c[i]>='a'&&c[i]<='z')
        c[i]=c[i]-32;
    }
        for(int i=0;i<s.size();i++)
    {
        if(s[i]>c[i])
        {
            cout<<1<<endl;
            return 0;
        }
        if(c[i]>s[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0 ; 
}