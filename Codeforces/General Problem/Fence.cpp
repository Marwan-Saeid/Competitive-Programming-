#include<bits/stdc++.h>

using namespace  std ;

int main(){
    int n, k,mi=INT_MAX,sum=0; cin>>n>>k;
    vector<int>v(n+5),su(n+5);
    for(int i=0;i<n;i++){
            cin>>v[i];
            if(i<k)
            sum+=v[i];
    }
    su[0]=sum,mi=sum;
    for(int i=1;i<n-k+1;i++){
        su[i]=su[i-1]-v[i-1]+v[i+k-1];
        mi=min(mi,su[i]);
    }
    for(int i=0;i<n-k+1;i++){
        if(su[i]==mi){
            cout<<i+1<<endl;
            break;
        }
    }
    
}