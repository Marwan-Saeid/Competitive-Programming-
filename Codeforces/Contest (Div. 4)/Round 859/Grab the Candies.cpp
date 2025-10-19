#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test ; cin>>test;
    while(test--){
        int n,sum1=0,sum2=0; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
        (arr[i]%2==0)?sum1+=arr[i]: sum2+=arr[i];
        }
        (sum1>sum2)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}