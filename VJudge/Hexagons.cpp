#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n; cin>>n;
  long long sum=n*(n+1)/2;
  long long result=(5*sum)+sum;
  cout<<result+1<<endl;
  return 0;
}