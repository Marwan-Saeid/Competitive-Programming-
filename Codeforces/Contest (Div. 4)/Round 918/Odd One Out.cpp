#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a==b)
      cout<<c<<endl;
      if(a==c)
      cout<<b<<endl;
      if(c==b)
      cout<<a<<endl;
    }
}