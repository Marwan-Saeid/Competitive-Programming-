#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int num1 ,num2 ;
   cin>>num1 >> num2 ;
   int ncode=num1+1;
  char arr[num1];
  bool check=true ;
   for(int i=1 ;i<=(num1+num2+1);i++)
   cin>>arr[i];
    for(int i=1 ;i<=(num1+num2+1);i++)
   {
      if(i==ncode)
      {
         if(arr[i]!='-'){
         check=false ;
         break ;
         }
      }
      else
      if(arr[i]>='0'&& arr[i]<='9' ) 
      arr[i]=arr[i];
      else
      {
          check=false ;
          break;
      }
   }
   if(check )
   cout<<"Yes"<<endl; 
   else 
   cout<<"No"<<endl; 
    return 0 ;
}