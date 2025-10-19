#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e5+1;
ll arr[N]={};
int main(){
  int count=0;
  for(int i=0;i<=2e5;i+=2)
  arr[count++]=i;
  
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
    
    ll l=0,r=N-1,ans=0;
    while(l<=r){
      ll mid=(l+r)/2;
      if(arr[mid]*k<=num_even){
        ans=arr[mid];
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
    // if(n==k){
    //   cout<<1<<endl;
    //   continue;
    // }
    num_ood+=num_even-(ans*k);
   if(num_ood>=k )
    cout<<ans+1<<endl;
    else
    cout<<ans<<endl;
    
  }
  return 0;
}