#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; 
    while(test--){
       int n,counter=0; cin>>n;
       vector<long long >v1(n+1),v2(n+1);
       for(int i=1;i<=n;i++)
       cin>>v1[i];
       int ma=0;
       for(int i=0;i<=n;i++){
           if(v1[i]>=ma){
               v2[i]=v1[i];
               ma=v1[i];
           }
           else
           v2[i]=ma;
       }
       
       for(int i=1;i<=n;i++){
           v1[i]+=v1[i-1];
       }
       
       for(int i=1;i<=n;i++){
           if(v1[i]-v2[i]==v2[i])
           counter++;
       }
      
       cout<<counter<<endl;
}
}