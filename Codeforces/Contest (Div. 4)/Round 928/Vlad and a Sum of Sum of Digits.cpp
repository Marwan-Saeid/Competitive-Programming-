#include<bits/stdc++.h>
using namespace std ;
int t,k,n,sum;
const int N=20e5+5;
int arr[N];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    for(int i=1;i<=N;i++){
        sum=0 ;
         k=i; 
        while(k>0){
            sum+=k%10;
            k/=10;
            }
          arr[i]=arr[i-1]+sum;  
    }
     cin >>t;
    while(t--){
        cin>>n;
        cout<<arr[n]<<endl;
    }
}