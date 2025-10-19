#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; 
    while(test--){
       int n,m; cin>>n>>m;
       vector<int>v;
      char arr[n+1][m+1];
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              cin>>arr[i][j];
              if(arr[i][j]=='#'){
                  v.push_back(i);
                  v.push_back(j);
              }
          }
      }
      int x=v[v.size()-2],y=v[v.size()-1];
      cout<<(v[0]+x)/2<<" "<<(v[1]+y)/2<<endl;
}
}