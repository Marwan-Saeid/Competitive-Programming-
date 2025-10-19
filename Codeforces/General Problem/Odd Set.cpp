#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;cin>>n; n*=2;
        int arr[n];
        int ood=0,even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            even+=(arr[i]%2==0);
           ood+=(arr[i]%2!=0);
        }
        if(ood==even)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}	