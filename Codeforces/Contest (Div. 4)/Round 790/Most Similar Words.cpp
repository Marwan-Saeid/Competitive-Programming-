#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
      int n,m ,result=INT_MAX;  cin>>n>>m;
      string A[n];
      for(int i=0;i<n;i++)cin>>A[i];
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        int counter=0;
            for(int k=0;k<m;k++){
                counter+=abs(A[i][k]-A[j][k]);
            }
       
        result=min(result,counter);
        }
      } 
      cout<<result<<endl;
    }
    return 0;
}