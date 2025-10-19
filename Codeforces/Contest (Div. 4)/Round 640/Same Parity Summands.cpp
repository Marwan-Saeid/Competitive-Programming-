#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ; cin>>t;
    while(t--){
       int n,k; cin>>n>>k;
       if(n%2==0&&k%2==0&&n>=k){
           cout<<"YES"<<endl;
           int w=k-1,sum=w;
           while(w--){
               cout<<1<<" ";
           }
           if(sum!=k)
           cout<<n-sum<<" "<<endl;
       }
       else if (n%2!=0&&k%2!=0&&n>=k){
           cout<<"YES"<<endl;
           int w=k-1,sum=w;
            while(w--){
               cout<<1<<" ";
           }
            if(sum!=k)
           cout<<n-sum<<" "<<endl;
       }
       else if (n%2==0&&k%2!=0&&n/k>=2){
           cout<<"YES"<<endl;
           int w=k-1 ,sum=2*w;
           while(w--){
               cout<<2<<" ";
           }
            if(sum!=k)
           cout<<n-sum<<" "<<endl;
       }
       else
       cout<<"NO"<<endl;
    }
}