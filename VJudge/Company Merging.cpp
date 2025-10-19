#include<bits/stdc++.h>
using namespace std;
const int N=150005;
int arr[N];
int main(){
  int n ; cin>>n;
  pair<long long , int>arr[n];
  long long  temp=0;
  for(int i=0;i<n;i++){
    int x; cin>>x;
    arr[i].first=0;
    arr[i].second=x;
    for(int j=0;j<x;j++){
      long long value; cin>>value;
      arr[i].first=max(arr[i].first,value);
    }
    temp=max(temp,arr[i].first);
  }
  long long result=0;
  for(int i=0;i<n;i++){
    if(arr[i].first<temp){
      result+=(arr[i].second*(temp-arr[i].first));
    }
  }
  cout<<result<<endl;
  return 0;
}