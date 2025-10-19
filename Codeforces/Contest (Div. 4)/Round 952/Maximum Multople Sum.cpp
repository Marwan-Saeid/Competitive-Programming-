#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; 
    while(test--){
       int n,ma=INT_MIN; cin>>n;
       vector<int>v(n+1,0);
       for(int i=2;i<=n;i++){
           int  sum=0,j=i;
           while(j<=n){
               sum+=j;
               j+=i;
           }
           v[i]=sum;
           ma=max(sum,ma);
       }
           for(int i=0;i<=n;i++){
               if(v[i]==ma){
                   cout<<i<<endl;
                   break;
               }
           }
       
       
}
}