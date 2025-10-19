#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n; cin>>n;
  int arr[2]={};
  for(int i=0;i<n;i++){
    int x; cin>>x;
    ++arr[x-1];
  }
  if((arr[0]%2==0 && arr[1] && arr[0] ) || (!arr[0] && arr[1]%2==0) || (arr[0]%2==0 && !arr[1])){
    cout<<"YES"<<endl;
    return ;
  }
  cout<<"NO"<<endl;
}
int main(){
  int test; cin>>test;
  while(test--){
    solve();
  }
  return 0;
}