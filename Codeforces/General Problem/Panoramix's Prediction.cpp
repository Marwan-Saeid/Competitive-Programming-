#include<bits/stdc++.h>

using namespace std ;

int main(){
    vector<bool> prime(100000,1);
    prime[0]=0,prime[1]=0;
    for(int i=2;i<=sqrt(50);i++){
        for(int j=2;j<=50/2;j++){
            prime[i*j]=0;
        }
    }
    int n,m; cin>>n>>m;
    bool check=1;
    for(int i=n+1;i<m;i++)
    {
        if(prime[i]==1)
        check=0;
    }
    if(prime[m]==1&&prime[n]==1&&m>n&&check)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}	