#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s, t ,c="";
    cin>>s>>t;
    for(int i=s.size()-1;i>=0;i--)
    {
        c+=s[i];
    }
   if(c==t)
  cout<<"YES"<<endl;
   else
       cout<<"NO"<<endl;
    return 0 ;
}