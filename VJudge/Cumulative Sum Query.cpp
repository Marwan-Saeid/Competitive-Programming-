#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n; cin>>n;
  long long  arr[n+5]={};
  for(int i=1;i<=n;i++) cin>>arr[i];
   for(int i=2;i<=n;i++) arr[i]+=arr[i-1];
   int q; cin>>q;
  
   while(q--){
     int n1,n2; cin>>n1>>n2;
     cout<<arr[n2+1]-arr[n1]<<endl;
   }
    return 0;
}
