#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
   cin >>s; 
   for(int i=0 ;i<size(s);i++)
   {
       if(s[i]>='a'&&s[i]<='z')
       cout<<char(s[i]-32);
       else if(s[i]>='A'&&s[i]<='Z')
       cout<<char(s[i]+32);
       else if(s[i]==',')
       cout<<" ";
   }
    return 0 ;
}