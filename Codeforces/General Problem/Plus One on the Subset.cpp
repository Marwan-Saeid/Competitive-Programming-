#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
       int n,m=INT_MIN,mi=INT_MAX; cin >>n;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       for(int i=0;i<n;i++){
           if(m<arr[i])
           m=arr[i];
       }
       for(int i=0;i<n;i++){
           if(mi>arr[i])
           mi=arr[i];
       }
       int k=m-mi;
       cout<<k<<endl;
    }
}