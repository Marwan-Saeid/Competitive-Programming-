#include<bits/stdc++.h>
using namespace std;
int main(){
    short n; cin>>n;
    int a=n%10;
    n/=10;
    if(a%n==0 || n%a==0 )
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}