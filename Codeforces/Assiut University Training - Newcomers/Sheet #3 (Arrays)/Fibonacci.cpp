#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    
   long long n , a = 0 , b = 1  ,fib =1 ;
    
    cin >> n;
    if(n==1) {
    cout<<0<<endl;
    return 0; 
    }
    for (int i = 1; i < n-1 ; i++) {
       
        fib = a + b;
        a = b;
        b = fib;
    }
cout<<fib<<endl; 
    return 0 ;
}