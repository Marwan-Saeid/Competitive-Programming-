#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test=1;
    cin>>test;
    while(test--){
        int n,k; 
        cin>>n>>k;
        int arr[n],count[n]={1};
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=1;i<n;i++){
            if(arr[i]>(arr[i-1]/2.0))
            count[i]=count[i-1]+1;
            else
            count[i]=1;
        }
        long long result=0;
        for(int i=0;i<n;i++){
            if(count[i]>=k+1)
            result++;
        }
        cout<<result<<endl;
    }
    return 0;
}