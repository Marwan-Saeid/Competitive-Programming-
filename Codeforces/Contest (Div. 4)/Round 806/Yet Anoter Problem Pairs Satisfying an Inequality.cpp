#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int test;cin>>test;
  while(test--){
    int n; cin>>n;
    int arr[n];
    vector<int> orgin, copy;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(i+1>arr[i]){
        orgin.push_back(i+1);
        copy.push_back(arr[i]);
      }
    }
    
    sort(copy.begin(),copy.end());
    
    
    ll result=0;
    for(int x:orgin){
      ll l=0,r=copy.size()-1,ans=-1;
      while(l<=r){
        ll mid=(l+r)/2;
        if(copy[mid]>x){
          r=mid-1;
          ans=mid;
          }
        else{
          l=mid+1;
        }
      }
      if(ans!=-1)
      result+=copy.size() - ans;
    }
    cout<<result<<endl;
  }
  return 0;
}