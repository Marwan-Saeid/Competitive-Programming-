#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
   int t; cin >>t;
   while(t--){
       string s; cin>>s;
       int sum=0;
       if(s[1]=='+'){
          sum+=s[0]-'0'; 
          sum+=s[2]-'0'; 
       }
       cout<<sum<<endl;
   }
}