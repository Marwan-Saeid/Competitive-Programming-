#include<bits/stdc++.h>
using namespace std;
int n ;
void f(int num){
    if(num>n) return ;
    cout<<num<<endl;
    f(num+1);
}
int main(){
    cin>>n;
    f(1);
}