#include<bits/stdc++.h>
using namespace std;
int main(){
  int test ; cin>>test;
  while(test--){
    
    int n, q; cin>>n>>q;
    int arr[n+1];
    long long sum=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=1;i<n;i++)
    arr[i]+=arr[i-1];
    arr[n]=arr[n-1]+1;

   while(q--){
     int x; cin>>x;
    if(x>sum)
    cout<<-1<<endl;
    else{
      int y=(lower_bound(arr, arr+n, x) - arr );
      cout<<y+1<<endl;
    }
     
   }
   
  }
  return 0;
}