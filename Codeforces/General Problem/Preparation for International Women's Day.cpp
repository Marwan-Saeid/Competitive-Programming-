#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,k,m; cin>>n>>k;
    int f[105]={};
    for(int i=0;i<n;i++){
        cin>>m;
        f[m%k]++;
    }
    int counter=f[0]/2;
    for(int i=1;i<=100;i++){
        int v=k;
        if(f[i]){
            while(v<=100 && f[i]){
                int cur=v-i;
                if(f[cur] && f[i] && i!=cur){
                    int w=min(f[cur],f[i]);
                    f[cur]-=w,f[i]-=w;
                    counter+=w;
                }
                else if (f[cur] && f[i] && i==cur){
                    int w=f[i]/2;
                    f[i]-=w*2;
                    counter+=w;
                }
                v+=k;
            }
        }
    }
    cout<<counter*2<<endl;
    return 0;
}