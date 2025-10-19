#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int test;cin>>test;
   while(test--){
     int n , q; cin>>n>>q;
     int arr[n+2]={};
     for(int i=1;i<=n;i++){
       int x; cin>>x;
       arr[i]=arr[i-1]+(x%2==0?0:1);
     }
    // for(int i=1;i<=n;i++) cout<<arr[i]<<" ";
    // cout<<endl;
    // arr[n+1]=arr[n];
    while(q--){
      int l,r,k; cin>>l>>r>>k;
      int result=arr[l-1]-arr[0]+arr[n]-arr[r];
      if((r-l+1)%2!=0)
      result+=(k%2==0?0:1);
      cout<<((result%2!=0)?"YES":"NO")<<endl;
    }
    
   }
    return 0;
}