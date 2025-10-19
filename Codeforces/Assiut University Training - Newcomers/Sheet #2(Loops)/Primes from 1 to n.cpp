#include<iostream>
using namespace std ;
int main ()
{
    int n ; 
   
    cin >> n ;
    for(int i=1; i<=n  ;i++) 
    {
         bool y = true ;
        for(int j=2 ;j<=i/2 ;j++ ) 
        {
           if(i%j==0)
           {
            y=false ;
           break ;
           }
        }
        if(y==true && i!=1)
        cout<<i<<" ";
        
    }
    return 0 ; 
}