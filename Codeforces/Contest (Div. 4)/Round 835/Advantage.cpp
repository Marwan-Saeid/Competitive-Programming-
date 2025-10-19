#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;cin>>test;
  while(test--){
    int n; cin>>n;
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      a[i]=arr[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
      if(arr[i]==a[n-1])
      cout<<arr[i]-a[n-2]<<" ";
      else
      cout<<arr[i]-a[n-1]<<" ";
    }
    cout<<endl;
  }
  return 0;
}