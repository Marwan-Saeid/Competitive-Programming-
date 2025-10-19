#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t; cin>>t;
    set<int>s={1,2,3,4,5,6,7,8,9,10,11,12};
    while(t--){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int t=a-1,tt=b-1,w=c-1,ww=d-1;
    if(min(w,ww)>min(t,tt)&&max(t,tt)>min(w,ww)&&max(w,ww)>max(t,tt)||min(t,tt)>min(w,ww)&&max(w,ww)>min(t,tt)&&max(t,tt)>max(w,ww))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    
}