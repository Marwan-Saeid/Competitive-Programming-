#include<bits/stdc++.h>
using namespace std;
int n ;
void f(int num){
    if(num==1) return ;
    cout<<num<<" ";
    f(num-1);
}
int main(){
    cin>>n;
    f(n);
    cout<<1;
}