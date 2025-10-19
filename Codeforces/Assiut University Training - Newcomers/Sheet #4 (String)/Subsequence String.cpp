#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s, c="hello";
    cin >>s;
    int m =0,k=0 ;
   for(int j=0;j<5;j++)
   {
        for(int i=k ; i<s.size();i++)
  {
      if(s[i]==c[m]) 
      {
          k=i+1;
          m++;
      }
  }
}
if(m==5)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    return 0 ;
}