#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
   int n, m;
   cin>>n>>m;
   int k=n/2;
   if(n%2!=0)
    k++;
   for(int i=k;i<=n;i++){
       if(i%m==0){
           cout<<i<<endl;
           return 0 ;
       }
   }
   cout<<-1<<endl;
}