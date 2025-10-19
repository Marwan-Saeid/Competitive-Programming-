#include<bits/stdc++.h>
using namespace std;
int n ;
int f(int num){
    if(1==num) return 0;
    if (2==num) return 1;
    return f(num-1)+f(num -2);
    
}
int main(){
   int n; cin>>n;
   cout<<f(n)<<endl;
}