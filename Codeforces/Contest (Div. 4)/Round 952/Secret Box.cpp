#include<bits/stdc++.h>

using namespace std ;

int main(){
    int test; cin>>test;
    while(test--){
        int arr[3]={},a[3]={} ; long long k,m,re=0; 
        for(int i=0;i<3;i++)
        cin>>arr[i]; 
        cin>>k;
        bool check=0;
       sort(arr,arr+3,greater<int>());
        for(int i=1;i<=arr[0];i++){
            for(int j=1;j<=arr[1];j++){
               m=i*j; long long result=1;
               if((m*(k/m))==k && (k/m)<=arr[0]){
                  a[0]=i,a[1]=j,a[2]=k/m; 
                  check=1;
            //  sort(a,a+3,greater<int>());
               for(int i=0;i<3;i++){
                double w=arr[i];
                 result*=(w-a[i]+1); 
                  }
               if(result>re)
               re=result;   }
            }
        }
        cout<<re<<endl;

    }
}