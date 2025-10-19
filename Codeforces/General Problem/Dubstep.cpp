#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int k=0;
    string s,c="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
        c+=" ";
        i+=2;
        }
        else
        c+=s[i];
    }
    for(int i=0;i<c.size();i++)
    {
        if(c[i]!=' ')
        {
        k=i;
        break;
        }
    }
    for(int i=k;i<c.size();i++)
    {
        if(c[i]==' '&&c[i+1]==' ')
        continue;
        else
        cout<<c[i];
    }
}