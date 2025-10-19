#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,en=0,dollar=0;
    cin>>n;
    int arr[n+1];arr[0]=0;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i]&&!en)
        dollar+=arr[i+1]-arr[i];
        else if (arr[i+1]<=arr[i])
        en+=arr[i]-arr[i+1];
        else{
            if(en>=arr[i+1]-arr[i])
            en-=arr[i+1]-arr[i];
            else{
            dollar+=arr[i+1]-arr[i]-en;
            en=0;
            }
        }
    }
    cout<<dollar<<endl;
}