#include<bits/stdc++.h>
using namespace std ;
int main (){
    long long n,r=2 ; cin >>n;
    if((n|~(n-1))==-n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}