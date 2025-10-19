#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s,c;
    cin>>s>>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=c[i])
        cout<<1;
        else
        cout<<0;
    }
    return 0;

}