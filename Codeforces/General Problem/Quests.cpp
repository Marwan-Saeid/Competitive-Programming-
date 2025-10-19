#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int test ;cin>>test;
  while(test--){
    int n , k; cin>>n>>k;
    int a_point[n],b_point[n];
    for(int i=0;i<n;i++) cin>>a_point[i];
    for(int i=0;i<n;i++) cin>>b_point[i];
    
    ll fre[n]={a_point[0]};
    for(int i=1;i<n;i++){
      fre[i]=a_point[i]+fre[i-1];
    }
    
    int max_num[n]={b_point[0]};
    for(int i=1;i<n;i++){
      max_num[i]=max(b_point[i],max_num[i-1]);
    }
    
    ll result=0;
    for(int i=0;i<min(n,k);i++){
      ll temp=fre[i];
      temp+=((k-1-i)*max_num[i]);
      result=max(result,temp);
    }
    
    cout<<result<<endl;
  }
  return 0; 
}