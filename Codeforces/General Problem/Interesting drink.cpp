#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n;  cin>>n;
  deque<int>dq(n);
  for(int i=0;i<n;i++)
  cin>>dq[i];
  sort(dq.begin(),dq.end());
  int t;  cin >>t;
  while(t--){
     int m;  cin>>m;
      auto k = upper_bound(dq.begin(), dq.end(), m)-dq.begin() ;
      cout<<k<<endl;
  }
}