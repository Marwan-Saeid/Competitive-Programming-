#include<bits/stdc++.h>
using namespace std;
int main(){
    int test=1; 
    cin>>test;
    while(test--){
       int n ;cin>>n;
       int point[n+1]={};
       int f[n+1]{};
       for(int i=0;i<n;i++){
        int x; cin>>x; 
        point[i+1]=x;
        ++f[x];
    }
    long long result=0;
    for(int i=0;i<=n;i++){
        if(f[i]>2){
            long long r=f[i]-1;
        result+=(r*(r+1)/2);
        }
        else if(f[i]==2)
        result++;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(point[i]>point[j] && point[j])
            result++;
        }
    }
    cout<<result<<endl;
    }
    return 0;
}