#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,q; cin>>n>>q;
  vector<int>arr(12);
  vector<vector<int>> ve(n+1);
  ve[0]=arr;
  for(int i=1;i<=n;i++){
    int x ; cin>>x;
    arr[x]++;
    ve[i]=arr;
  }
  while(q--){
    int a, b; cin>>a>>b;
    int count=0,index=0;
    for(int i=10;i>=1;i--){
     int outside = ve[a - 1][i] + (ve[n][i] - ve[b][i]);
        if (outside > 0) {
            index = i;
            count = outside;
            break;
        }
      // if(ve[b][i])
      // cout<<i<<' '<<ve[b][i]<<endl;
    }
    // cout<<count<<endl;
    cout << index << ' ' <<count << endl;
  }
  return 0;
}