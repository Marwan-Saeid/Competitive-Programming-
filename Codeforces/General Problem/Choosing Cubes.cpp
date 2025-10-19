#include<bits/stdc++.h>

using namespace std ;

int test;

int main(){
    cin>>test;
    while(test--){
        int n,f,k;
        bool check=0, remo=0;
        cin>>n>>f>>k;
        
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
         f=arr[f-1];
         sort(arr,arr+n ,greater<int>() );
         
         for(int i=0;i<n;i++){
             if(i<=k-1){
                 if(arr[i]==f)
                 remo=1;
             }
             else{
                 if(arr[i]==f)
                 check=1;
             }
         }
         if(remo && check)
         cout<<"MAYBE"<<endl;
         else if ( remo )
         cout<<"YES"<<endl;
         else if( check )
         cout<<"NO"<<endl;
    }
}