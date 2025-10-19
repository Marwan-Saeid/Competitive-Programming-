#include<bits/stdc++.h>
using namespace std;
int n ;
void f(int num){
    if(!num) return ;
    int k=num%10;
    f(num/10);
    cout<<k<<" ";
}
int main(){
    int test; cin>>test;
    while(test--){
    cin>>n;
    f(n/10);
    cout<<n%10<<endl;
    }
}