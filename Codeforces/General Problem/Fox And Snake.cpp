#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,n;   cin>>t>>n;
       bool check =true ;
   for(int i=1;i<=t;i++)
   {
       if(i%2!=0)
       {
           for(int j=0;j<n;j++)
           cout<<"#";
       }
       else
       {
           if(check){
          for(int j=0;j<n-1;j++)
           cout<<".";   cout<<"#";  check=false ;}
           else
           {cout<<"#";
              for(int j=0;j<n-1;j++)
              cout<<".";   check =true ;}  
           }
       cout<<endl;
       }
   }		