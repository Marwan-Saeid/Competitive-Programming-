#include<iostream>
using namespace std ;
int main ()
{
    int n ,m ,t ; 
   while(true)
   {
     int  sum =0 ;
        cin>>n >> m ;
         if(n<=0 || m<=0)
    break ;
    if(n>m)
    {
        t=n ;
        n=m ; 
        m=t;
    }
   
    for(int i=n;i<=m ;i++)
    {
        sum+=i ;
        cout<<i<<" " ;
    }
    cout<<"sum ="<<sum<<endl; 
   }
    return 0 ;
}