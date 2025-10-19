#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ; cin>>test;
    while(test--){
      int n; cin>>n;
      char A[n][4];
      for(int i=0;i<n;i++){
          for(int j=0;j<4;j++)
          cin>>A[i][j];
      }
      for(int i=n-1;i>=0;i--){
          for(int j=0;j<4;j++){
              if(A[i][j]=='#')
              cout<<j+1<<" ";
          }
      }
      cout<<endl;
    }
    return 0;
}