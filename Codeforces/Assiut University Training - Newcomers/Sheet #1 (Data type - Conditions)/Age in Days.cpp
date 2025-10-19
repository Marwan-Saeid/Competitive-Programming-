#include<iostream>
using namespace std ;
int main ()
{
    int n , m , x ,year , month , day  ;
    cin>>n ;
    m = n % 365 ;
    year = ( n - m ) / 365 ;
     x = m % 30 ;
    month = ( m - x ) / 30 ;
    day = x ;
    cout<< year <<" years"<<endl; 
     cout<< month <<" months"<<endl; 
      cout<< day <<" days"<<endl; 
    return 0; 
}