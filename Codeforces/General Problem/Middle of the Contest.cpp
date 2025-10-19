#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s1,s2; cin>>s1>>s2;
    int h1=((s1[0]-'0')*10)+s1[1]-'0';
    int h2=((s2[0]-'0')*10)+s2[1]-'0';
    int m1=((s1[3]-'0')*10)+s1[4]-'0';
    int m2=((s2[3]-'0')*10)+s2[4]-'0';
    int total=(h2-h1)*60;
    if(m2>m1)
    total+=m2-m1;
    else
    total-=m1-m2;
    total/=2;
    int di=total/60,mod=total%60;
    h1+=di,m1+=mod;
    if(m1>=60){h1++; m1-=60; }
    else
    m2=0;
    if(h1<10)
    cout<<0<<h1<<":";
    else
    cout<<h1<<":";
    if(m1<10)
     cout<<0<<m1;
    else
    cout<<m1;
    return 0;
}