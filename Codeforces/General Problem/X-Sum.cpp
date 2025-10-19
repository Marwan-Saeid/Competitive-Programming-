#include<bits/stdc++.h>
using namespace std ;
int main(){
  int test; cin>>test;
  while(test--){
    
    int n, m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++)
     cin>>arr[i][j];
    }
    long long result=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        long long sum=arr[i][j];
        int k=i+1,w=j+1;
        while(k<n && w<m){
          sum+=arr[k][w];
          k++; w++;
        }
        k=i-1,w=j-1;
        while(k>=0 && w>=0){
          sum+=arr[k][w];
          k--; w--;
        }
        k=i-1,w=j+1;
        while(k>=0 && w<m){
          sum+=arr[k][w];
          k--; w++;
        }
        k=i+1,w=j-1;
        while(k<n && w>=0){
          sum+=arr[k][w];
          k++; w--;
        }
        result=max(result,sum);
      }
    }
    cout<<result<<endl;
  }
  return 0;
}