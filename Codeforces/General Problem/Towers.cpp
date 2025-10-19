#include<bits/stdc++.h>
using namespace std ;
const int N=5e5+5;
int s[N]={};
int main(){
   int num,n=0,counter=0,maxx=INT_MIN; cin>>num ;
   int arr[num];
   
   for(int i=0;i<num;i++){
   cin>>arr[i];
   ++s[arr[i]];
   }
   
   for(int i=0;i<=N;i++){
        n=max(s[i],n);
        if(s[i]!=0)
        counter++;
   }
   cout<<n<<" "<<counter<<endl;
  
}