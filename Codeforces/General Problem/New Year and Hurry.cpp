#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int max=240,counter=0;
    max-=k;
    for(int i=1;i<=n;i++)
    {
        if(max>=i*5){
            counter++;
            max-=i*5;
        }
    }
    cout<<counter<<endl;
    return 0;
}