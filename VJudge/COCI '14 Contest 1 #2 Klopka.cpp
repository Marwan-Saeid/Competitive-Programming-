#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin>>a[i]>>b[i];
  sort(a,a+n);
  sort(b,b+n);
  int result=max(a[n-1]-a[0],b[n-1]-b[0]);
  cout<<result*result<<endl;
}