#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n; 
int arr[N];
void solve(int value,int i){
  if(i>=n) return ;
  cout<<max(value,arr[i])<<" ";
  solve(max(value,arr[i]),i+1);
}
int main(){
 cin>>n;
 for(int i=0;i<n;i++) cin>>arr[i];
 solve(INT_MIN,0);
  return 0;
}