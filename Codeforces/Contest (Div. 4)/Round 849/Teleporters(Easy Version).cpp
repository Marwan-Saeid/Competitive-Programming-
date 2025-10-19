#include<bits/stdc++.h>
using namespace std;
int main(){
  int test; cin>>test;
  while(test--){
    int n,c;cin>>n>>c;
    int arr[n];
    vector<long> ve; 
    for(int i=0;i<n;i++) {
      cin>>arr[i];
      ve.push_back(arr[i]+i+1);
    }
    // cout<<ve.size()<<endl;
    sort(ve.begin(),ve.end());
    int counter=0;
    for(int i=0;i<n;i++){
      if(ve[i]>c)
      break;
      counter++;
      c-=ve[i];
    }
    cout<<counter<<endl;
  }
  return 0;
}