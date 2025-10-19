#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    string decimal,st="";cin>>decimal;
    for(int i=0;i<x;i++){
        if(i==y) st+='1';
        else st+='0';
    }
    n--; int counter=0;
    for(int i=0;i<x;i++){
        if(st[i]!=decimal[n])
        counter++;
        n--;
    }
    cout<<counter<<endl;
    return 0;
}