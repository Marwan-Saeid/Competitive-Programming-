#include<bits/stdc++.h>

using namespace std ;

 
 int test ,n;
 
 
int main(){

       cin>>test;
    while(test--){
        long long result=1;
        int arr[9],mi=INT_MAX,m;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<mi){
                mi=arr[i];
                m=i;
            }
        }
    
        ++arr[m];
        for(int i=0;i<n;i++){
            result*=arr[i];
        }
        
        cout<<result<<endl;
    }

}