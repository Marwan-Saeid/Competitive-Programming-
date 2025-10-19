#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n ; cin >>n; 
    int arr[]={8,4,2,6},counter=0;
    if(n==0)
    cout<<1<<endl;
    else {
       for(int i=1;i<=n;i++){
           if(counter==3&&i!=n)
           counter=-1;
           if(i==n){
               cout<<arr[counter]<<endl;
               return 0;
           }
         counter++;
       }
    }
}