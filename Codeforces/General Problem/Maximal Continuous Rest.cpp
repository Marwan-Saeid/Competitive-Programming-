#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
int n;
int arr[N]={};
int main(){
    cin>>n;
    int endd=0;
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!arr[i]){
        endd=i;
        break;
        }
    }
    arr[n]=endd;
    int counter=0, result=0;
    for(int i=0;i<=n+1;i++){
        if(!arr[i]){
            result=max(result,counter);
            counter=0;
        }
        else
        counter+=arr[i];
    }
    cout<<result<<endl;
    return 0;
}