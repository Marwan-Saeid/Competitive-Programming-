#include<bits/stdc++.h>
using namespace std;
int main(){
  int test; cin>>test;
  while(test--){
    int n ; cin>>n;
    int arr[n+1]={};
    for(int i=0;i<n;i++) cin>>arr[i];
   long long result=0;
   int mi=INT_MAX,_=0;
   for(int i=0;i<n;i++){
     if(arr[i]<=0){
       _++;
       arr[i]*=-1;
     }
     mi=min(mi,arr[i]);
     result+=arr[i];
   }
  // cout<<mi<<endl;
  cout<<((_%2!=0)?-mi*2:0)+result<<endl;
  }
  return 0 ;
}