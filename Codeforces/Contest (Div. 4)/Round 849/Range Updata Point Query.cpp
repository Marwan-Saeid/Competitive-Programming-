#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int main(){
 int test; cin>>test;
 while(test--){
   int n , q; cin>>n>>q;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   vector<vector<int>>all_solution;
   all_solution.push_back({0,1});
  for(int i=0;i<n;i++){
    vector<int>curr;
    while(arr[i]>9){
      curr.push_back(arr[i]);
      int temp=arr[i],sum=0;
      while(temp>0){
        sum+=temp%10;
        temp=temp/10;
      }
      arr[i]=sum;
    }
    if(arr[i]<10) 
      curr.push_back(arr[i]);
    all_solution.push_back(curr);
  }
  
  
  
  
  // for(int i=0;i<=n;i++){
  //   for(int x:all_solution[i])
  //   cout<<x<< " ";
  //   cout<<endl;
  // }
  
  set<int> s;
  for(int i=1;i<=n+1;i++)
  s.insert(i);
  
  int f[N]={};
  
  while(q--){
    int op,l,r,x; cin>>op;
    if(op==1){
      cin>>l>>r;
      auto it = s.lower_bound(l);
      auto end = s.upper_bound(r);
      while (it != end) {
        int idx = *it;
        if (f[idx] >= 3)
            it = s.erase(it);
        else
            f[idx]++, ++it;
      }   
    }
    else{
      cin>>x;
      if(f[x]>=all_solution[x].size())
      cout<<all_solution[x][all_solution[x].size()-1]<<endl;
      else
      cout<<all_solution[x][f[x]]<<endl;
    }
      
    }
    
  // for(int i=0;i<=n;i++)
  // cout<<f[i]<<endl;
  }
  
  return 0 ;
}