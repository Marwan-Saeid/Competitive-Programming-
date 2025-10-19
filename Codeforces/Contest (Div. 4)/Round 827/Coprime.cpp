#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test; cin>>test;
    while(test--){
      int n; cin>>n;
      int arr[n];
      int number[1001]={};
      for(int i=0;i<n;i++){
      cin>>arr[i];
      number[arr[i]]=i+1;
      }
      int result=0;
      for(int i=1;i<1001;i++){
      for(int j=1;j<1001;j++){
        if(gcd(i,j)==1 &&number[i]&&number[j])
        result=max(result,number[i]+number[j]);
      }
      }
      cout<<((result)?result:-1)<<endl;
    }
    return 0;
}