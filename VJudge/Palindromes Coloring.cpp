#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  vector<ll> ref;
  for(int i=0;i<=2e5;i+=2)
  ref.push_back(i);
  int test;cin>>test;
  while(test--){
    ll n , k; cin>>n>>k;
    int fre[26]={};
    for(int i=0;i<n;i++){
      char c; cin>>c;
      ++fre[c-'a'];
    }
    
    ll num_even=0,num_ood=0;
    for(int i=0;i<26;i++){
      if(fre[i]%2!=0){
        num_ood++;
        num_even+=(fre[i]-1);
      }
      else
      num_even+=fre[i];
    }
    
    ll l=0,r=ref.size()-1,ans=0;
    while(l<=r){
      ll mid=(l+r)/2;
      if(ref[mid]*k<=num_even){
        ans=ref[mid];
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }
    if(k==1){
    cout<<(num_even+((num_ood)?1:0))<<endl;
      continue;
    }
    num_ood+=num_even-(ans*k);
   if(num_ood>=k )
    cout<<ans+1<<endl;
    else
    cout<<ans<<endl;
    
  }
  return 0;
}