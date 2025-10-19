#include<bits/stdc++.h>
using namespace std ;
bool odd(int n  )
{
    if(n%2==0)
    {
        bool check =false;
    }
   else
   return true ;
}
bool bay(int n )
{
     long long  arr[100]={},m=0,k ;
     while(n>0)
   {
       arr[m]=n%2; 
       n/=2;
       m++;
   }
   k=m-1;
    for(int i=0 ;i<m/2;i++) 
  {
    if(arr[i]!=arr[k])
    {
        return false ;
       return 0 ;
    }
    k--;
    
  }
}
int main ()
{
 
int n ; 
cin >>n;
if(n==1)
{
    cout<<"YES"<<endl;
    return 0 ;
}
if(odd(n)==1&&bay(n)==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0 ;
}