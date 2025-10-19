#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int n, count=1;
   cin>>n;
   char arr[n];
   for(int i=0 ;i<n ;i++)
   cin >>arr[i];
   char c=arr[0];
  for(int i=1;i<n;i++)
  {
     if(c==arr[i])
     c=arr[i];
     else
     {
         count++;
         c=arr[i];
     }
  }
  cout<<count<<endl;
    return 0 ;
}