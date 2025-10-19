#include<bits/stdc++.h>
using namespace std;
int n, m;

int f(int n){
    if(n>m){ return -1; }
    if(n==m){ return 0;}
    int result=f(n*3);
    if(result!=-1)
    return result+1;
    result=f(n*2);
    if(result!=-1)
    return result+1;
    return -1;
}

int main(){
    cin>>n>>m;
    cout<<f(n)<<endl;
    return 0;
}