#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   string s ;
   getline(cin,s) ;
   int counter=0, n,m=0;
   s+=" ";
for(int i=0;i<s.size();i++)
{
    if(s[i]==' ')
    counter++;
}
  while(counter--) 
  {
  for(int i=m ;i<s.size();i++)
  {
      if(s[i]==' ')
      {
      n=i-1; 
      break;
      }
  }
  for(int i=n;i>=m;i--) 
     {
         if(s[i]==' '&&s[i+1]==' ')
         continue;
         cout<<s[i];
     }
      m=n+2; 
      if(counter!=0)
      cout<<" ";
  }
    return 0 ;
}