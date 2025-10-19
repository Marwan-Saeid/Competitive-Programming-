#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
   int test; cin >>test;
   while(test--){
      int arr[2][2],t=4,m=0;
      for(int i=0;i<2;i++){
          for(int j=0;j<2;j++)
          cin>>arr[i][j];
      }
      bool check=1;
      while(t--){
          if(arr[0][0]<arr[0][1]&&arr[0][0]<arr[1][0]&&arr[1][0]<arr[1][1]&&arr[0][1]<arr[1][1]){
              cout<<"YES"<<endl;
              check=0;
              break;
          }
          else{
              m=arr[0][0];
              arr[0][0]=arr[1][0];
              arr[1][0]=arr[1][1];
              arr[1][1]=arr[0][1];
              arr[0][1]=m;
          }
      }
      if(check)
      cout<<"NO"<<endl;
   }
}