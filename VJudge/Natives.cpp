#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int arr[n];
  long long sum=0;
  for (int i=0;i<n;i++) {
  cin>>arr[i];
  sum+=arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<round(n/2.0);i++){
    sum-=arr[i];
  }
  cout<<sum<<endl;
  return 0;
}