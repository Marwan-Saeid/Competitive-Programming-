#include<bits/stdc++.h>
using namespace std;
void f(int num){
    if(!num) return ;
    cout<<"I love Recursion"<<endl;
    f(num-1);
    
}
int main(){
    int n;
    cin>>n;
    f(n);
}