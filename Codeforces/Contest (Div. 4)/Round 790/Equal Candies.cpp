#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m=INT_MAX; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m=min(m,arr[i]);
        }
        long long result=0;
        for(int i=0;i<n;i++)
        result+=abs(arr[i]-m);
        cout<<result<<endl;
    }
    return 0;
}