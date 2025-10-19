#include<bits/stdc++.h>
using namespace std;
const int N=15;
int n, m; 
int arr[N][N];
int solve(int i, int j){
    if (i >= n || j >= m) return INT_MIN; 
  if(i==n-1 && j==m-1) return arr[i][j];
  int take_left=solve(i+1,j);
  int take_down=solve(i,j+1);
  return max(take_down,take_left)+arr[i][j];
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) 
    cin>>arr[i][j];
  }
  cout<<solve(0,0)<<endl;
  return 0;
}