#include<bits/stdc++.h>
using namespace std;
bool on(int i ,int j){
  return i & (1<<j);
}
int main(){
  int n ; cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  for(int i=0;i<(1<<n);i++){
    
    for(int j=0;j<n && j<32;j++){
      if(on(i,j))
      cout<<arr[j]<<" ";
    }
    cout<<endl;
  }
  
}