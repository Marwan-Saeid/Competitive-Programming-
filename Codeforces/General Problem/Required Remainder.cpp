#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
       long long a,b,c;
       cin>>a>>b>>c;
       long long  k=c/a;
       k*=a;
       k+=b;
       if(k>c)
       k-=a;
       cout<<k<<endl;
       
    }
}