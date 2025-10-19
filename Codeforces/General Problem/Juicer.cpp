#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,b,d; cin>>n>>b>>d;
    int result=0,store=0,arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=b)
        store+=arr[i];
        if(store>d){
            result++;
            store=0;
        }
    }
    cout<<result<<endl;
}