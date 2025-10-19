#include<bits/stdc++.h>
using namespace std ;
const int N=1e5+5;
#define ll long long  
int n, w;
ll weight[N],price[N] , dp[105][N];
ll solve(int index,int we){
  if(index==n) return 0;
  if(dp[index][we]!= -1) return dp[index][we];
  ll leave=solve(index+1,we);
  ll take=0;
  if(we-weight[index]>=0){
  take=solve(index+1,we-weight[index])+price[index];
  }
  return dp[index][we]=max(take,leave);
}
int main(){
  cin>>n>>w;
  for(int i=0;i<n;i++){
  cin>>weight[i]>>price[i];
  }
  memset(dp, -1 , sizeof dp);
  cout<<solve(0,w)<<endl;
  return 0;
}