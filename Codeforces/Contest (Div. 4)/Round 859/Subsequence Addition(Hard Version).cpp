#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int test;cin>>test;
   while(test--){
     int n; cin>>n;
     int arr[n];
     map<int,int> mp;
     set<int > s;
     for(int i=0;i<n;i++) {
       cin>>arr[i];
       mp[arr[i]]++;
       s.insert(arr[i]);
     }
     long long cmp=1;
     bool flag=1,first=1;
    for(int x:s){
      if(cmp>=x){
        cmp+=((mp[x])*x);
        if(first){
          cmp--;
          first=0;
        }
      }
      else{
        flag=0;
      }
      // cout<<cmp<<endl;
    }
    cout<<(flag?"YES":"NO")<<endl;
   }
    return 0;
}