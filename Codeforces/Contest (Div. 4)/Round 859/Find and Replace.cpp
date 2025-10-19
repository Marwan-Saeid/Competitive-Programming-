#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test ; cin>>test;
    while(test--){
      int arr[1000]={};
      int n; string s; bool check=1;
      cin>>n>>s;
      for(int i=0;i<s.size();i++){
          if(i%2==0)
          ++arr[s[i]];
      }
      for(int i=0;i<s.size();i++){
          if(i%2!=0&&arr[s[i]]>0){
              check=0;
              cout<<"NO"<<endl;
              break;
          }
      }
      if(check)
      cout<<"YES"<<endl;
    }
}