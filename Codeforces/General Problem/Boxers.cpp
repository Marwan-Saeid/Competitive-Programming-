#include<bits/stdc++.h>
using namespace std;
const int N=150005;
int arr[N];
int main(){
  int n ;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr,arr+n);
  set<int>s;
  for(int i=0;i<n;i++){
    if(arr[i]-1 > 0 && s.find(arr[i]-1)==s.end())
    s.insert(arr[i]-1);
    else if(s.find(arr[i])==s.end())
    s.insert(arr[i]);
    else if(arr[i]+1<=N && s.find(arr[i]+1)==s.end())
    s.insert(arr[i]+1);
  }
  cout<<s.size()<<endl;
  return 0;
}