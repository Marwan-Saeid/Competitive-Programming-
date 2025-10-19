#include<iostream>
using namespace std ;
int main ()
{
    long long a , b ,c ,d ;
    cin >> a >>b >>c >>d ;
    if(c >= a && d >= b && b>c )
    cout<<c<<" "<<b<<endl; 
    else if (a >= c && b >= d && d > a )
    cout<<a<<" "<<d<<endl;
    else if (a <= c && b >= d   )
    cout<<c<<" "<<d<<endl; 
    else if (a >= c  && d >= b )
    cout<<a<<" "<<b<<endl;
    else if (c >=a && d >= b && c==b)
    cout<<c<<" "<<c<<endl;
    else if(a >= c && b >= d &&a==d)
    cout<<a<<" "<<a<<endl;
    else if (a==c&&b==d)
    cout<<a<<" "<<a<<endl;
    else 
    cout<<-1<<endl; 
    return 0 ;
}