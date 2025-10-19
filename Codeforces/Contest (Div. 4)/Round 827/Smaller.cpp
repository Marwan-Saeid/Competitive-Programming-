#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int test; cin>>test;
    while(test--){
      ll s[26]={};
      ll t[26]={};
      s[0]=t[0]=1;
      ll count_s=1,count_t=1;
      int q; cin>>q;
      while(q--){
        int op,count; cin>>op>>count;
        string word; cin>>word;
        if(op==1){
          for(int x: word){
            s[x-'a']+=count;
            count_s+=count;
          }
        }
        else{
          for(int x: word){
            t[x-'a']+=count;
            count_t+=count;
          }
        }
      int _s=0,_t=0;
      for(int i=0;i<26;i++){
        // if(s[i])
        //   _s=i;
        if(t[i])
        _t=i;
      }
      
      cout<<(((_t>_s)||(_t==_s&&t[_t]>s[_s] && count_s-s[0]==0))? "YES":"NO")<<endl;
      }
    }
  return 0;
}