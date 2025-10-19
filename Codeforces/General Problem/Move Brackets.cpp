#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;  cin>>t;
    while(t--){
    int n;
   cin>>n;
   string s; cin>>s;
   while(true){
       bool check=1;
   for(int i=0;i<s.size();i++){
       if(s[i]=='('&&s[i+1]==')'){
           check=0;
       s.erase(s.begin()+i,s.begin()+i+2);
       }
   }

   if(check==1)
   break;
   }
   cout<<s.size()/2<<endl;
    }
  
}