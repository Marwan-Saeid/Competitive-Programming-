#include <bits/stdc++.h>
using namespace std;
bool com(pair<int , long long > a ,pair<int ,long long > b){
  return a.second > b.second;
}
int main() 
{
    int test; cin>>test;
    while(test--){
      int n, m; cin>>n>>m;
      pair<int, long long> p[n];
      for(int i=0;i<n;i++)
      p[i].second=0;
      int arr[n][m];
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>arr[i][j];
          p[i].second+=arr[i][j];
        }
        p[i].first=i;
      }
      sort(p,p+n,com);
      long long sumation=0;
      long long  w=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          w+=arr[p[i].first][j];
          sumation+=w ;
          // cout<<arr[p[i].first][j]<<" ";
        }
        // cout<<endl;
      }
      cout<<sumation<<endl;
    }
    return 0;
}