#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int fib=1,a=1,b=0,limit; cin>>limit ;
    if(limit>=1)
    cout<<0<<" ";
    if(limit>=2)
    cout<<fib<<" ";
    for(int i=0;i<limit-2;i++){
       fib=a+b;
       b=a;
       a=fib;
       cout<<fib<<" ";
    }
}