#include<iostream>
using namespace std ;
int main ()
{
   int n ; 
   cin >> n ;
   for(int i=1;i<=n;i++)
   {
       int a , b , c ,sum=0;
       cin >> a >> b ;
       if(a>b)
       {
           c=a;
           a=b;
           b=c;
       }
       if(a%2==0)
       a++ ;
       else
       a=a+2;
       for(int j=a; j<b ;j=j+2)
       {
           sum+=j ;
       }
       cout<<sum <<endl;
   }
    return 0 ;
}