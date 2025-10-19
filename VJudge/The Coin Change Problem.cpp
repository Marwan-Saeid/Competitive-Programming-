#include <bits/stdc++.h>
using namespace std;
const int N=2005;
long long  dp[N][N];
int arr[N];
long long  solve(int index , int k){
  if(index==-1 || k<0) return 0;
  if(k==0) return 1;
  
  if(dp[index][k]!=-1) return dp[index][k];
  
  long long  leave=solve(index-1,k);
  long long  take=solve(index,k-arr[index]);
  
  return dp[index][k]=leave+take;
}
int main() 
{
  int test=1; 
  while(test--){
    int n, k;
    cin>>n>>k;
    
    memset(dp,-1 , sizeof dp);
    
    for(int i=0;i<k;i++)
    cin>>arr[i];
    
    // sort(arr,arr+k);
    cout<<solve(k-1,n)<<endl;
  }
    return 0;
}