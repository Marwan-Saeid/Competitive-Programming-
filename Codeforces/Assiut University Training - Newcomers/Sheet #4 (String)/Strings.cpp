#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   string a, b;
   cin >> a>>b ;
   string s=a+b ;
   int n=size(a);
   int m=size(b);
   
   cout<<n <<" "<<m<<endl; 
   cout<<s<<endl; 
   for(int i=0;i<(n);i++)
   {
       
           if(i==0)
           cout<<b[0];
           else 
           cout<<a[i];
   }
   cout<<" ";
   for(int i=0 ;i<m;i++)
   {
       if(i==0)
       cout<<a[0];
       else 
       cout<<b[i];
   }
    return 0 ;
}