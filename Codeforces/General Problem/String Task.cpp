#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s,c;
    cin>>s;
    for(int i=0;i<s.size() ;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        s[i]=s[i]+32;
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
        continue;
        else 
        c+=s[i];
    }
    for(int i=0;i<c.size();i++)
    {
        if(i!=c.size())
        cout<<'.';
        cout<<c[i];
    }
}