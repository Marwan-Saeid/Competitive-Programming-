#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   string s ,c="";
   getline(cin,s);
   int count=1;
  for(int i=0;i<s.size();i++)
  {
     if(s[i]>='a'&&s[i]<='z')
     c+=s[i];
     else if(s[i]>='A'&&s[i]<='Z')
     c+=s[i];
     else if(s[i]==' ')
     c+=s[i];
     else
     c+=" ";
  }
  int n=c.size();
  for(int i=0 ;i<c.size()-1;i++)
  {
      if(c[i]==' '&&c[i+1]!=' ')
      count++;
  }
  if(c[0]==' ')
  count--;
   cout<<count<<endl;
    return 0 ;
}