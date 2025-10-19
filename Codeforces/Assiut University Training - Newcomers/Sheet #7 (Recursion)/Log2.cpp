#include<bits/stdc++.h>
using namespace std;
const int N=15;
long long  n;
int solve(long long  i){
  if(i==1) return 0;
  return solve(i/2)+1;
}
int main(){
  cin>>n;
  cout<<solve(n)<<endl;
  return 0;
}