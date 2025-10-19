#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,arr[1000000]; cin>>n;
    for(int i=1;i<=n;i++){
        int w; cin>>w;
        arr[w]=i;
}
    long long m,v=0,s=0; cin>>m;
    while(m--){
        int k;cin>>k;
        v+=arr[k]; s+=n-arr[k]+1;
    }
    cout<<v<<" "<<s<<endl;
}