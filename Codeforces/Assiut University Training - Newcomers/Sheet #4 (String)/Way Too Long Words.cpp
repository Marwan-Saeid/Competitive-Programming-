#include<bits/stdc++.h>
using namespace std ;
int main ()
{
 int n ;
 cin >>n;
 while(n--)
 {
      string s;
  cin >> s;
  int m =size(s)-1;
  if(size(s)<=10)
  cout<<s<<endl; 
  else 
  cout<<s[0]<<size(s)-2<<s[m]<<endl; 
 }
    return 0 ;
}