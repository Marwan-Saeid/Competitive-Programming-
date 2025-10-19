#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;cin>>test;
  while(test--){
    int n , m; cin>>n>>m;
    int bottom[105]={};
    int left[105]={};
    for(int i=0;i<n;i++) {
      int x; cin>>x;
      ++bottom[x];
    }
    for(int i=0;i<m;i++) {
      int x; cin>>x;
      ++left[x];
    }
    int counter=0;
    for(int i=1;i<=100;i++){
      if(bottom[i] && left[i])
      counter++;
    }
    cout<<counter<<endl;
  }
  return 0;
}