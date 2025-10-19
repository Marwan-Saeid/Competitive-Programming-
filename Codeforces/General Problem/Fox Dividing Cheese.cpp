#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,m2,m3,m5,n2,n3,n5,k=10000,w=10000,counter=0;
    cin>>a>>b;
    m2=m3=m5=n2=n3=n5=0;
    while(k--){
        if(a==1)
        break;
        if(a%2==0){
        m2++;
        a/=2;
        }
        if(a%3==0){
        m3++; a/=3;}
        if(a%5==0){
        m5++; a/=5;}
    }
        while(w--){
        if(b==1)
        break;
        if(b%2==0){
        n2++; b/=2;}
        if(b%3==0){
        n3++; b/=3;}
        if(b%5==0){
        n5++; b/=5;}
    }
     counter=abs(m2-n2)+abs(m3-n3)+abs(m5-n5);
    if(a==b)
    cout<<counter<<endl;
    else
    cout<<-1<<endl;
}