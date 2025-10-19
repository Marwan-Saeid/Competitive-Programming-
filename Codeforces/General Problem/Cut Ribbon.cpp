#include<bits/stdc++.h>
using namespace std;
int n, arr[3];
const int N=1e4+5;
int dp[N];

int count(int x , int a ,int b ,int c ){
  if (x==0) return 0;
  if(x<0) return -1e8;
  int& ret=dp[x];
  if(ret!=-1) return ret;
  int op1=count(x-a,a, b,c)+1;
  int op2=count(x-b,a,b,c)+1;
  int op3=count(x-c,a,b,c)+1;
  return ret=max({op1,op2,op3});
}

int main(){
  
  cin>>n;
  
  memset(dp, -1 ,sizeof dp ) ;
  
  for(int i=0;i<3;i++) cin>>arr[i];
  
  sort(arr,arr+3);
  
  cout<<count(n ,arr[0], arr[1] ,arr[2])<<endl;
  
  return 0;
}