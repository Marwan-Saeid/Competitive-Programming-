#include<bits/stdc++.h>
using namespace std ;
int main(){
     float n,t,k,d;
    cin>>n>>t>>k>>d;
    int f1=ceil(n/k);
   // cout<<f1;
    int o1=0,o2=d;
    for(int i=0;i<f1;i++){
        if(o1<o2) o1+=t;
        else o2+=t;
    }
    if(max(o1,o2)<f1*t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}