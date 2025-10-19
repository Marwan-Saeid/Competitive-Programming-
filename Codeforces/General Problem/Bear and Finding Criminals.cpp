#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,m; cin>>n>>m;
    int arr[101]={},counter=0,a=m-1,b=m+1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        counter+=arr[i];
    }
    while(b!=102){
        if(a>0&&b<=n){
            if(arr[a]+arr[b]==1)
            counter--;
        }
        a--; b++;
    }
    cout<<counter<<endl;
}