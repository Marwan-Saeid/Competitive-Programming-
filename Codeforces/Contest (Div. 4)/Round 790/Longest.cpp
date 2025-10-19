#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test ; cin>>test;
    while(test--){
      int n, k; cin>>n>>k;
      set<int>s;
      map<int,int>mp;
      for(int i=0;i<n;i++){
        int x; cin>>x;
        s.insert(x);
        mp[x]+=1;
      }
      
      vector<int>arr;
      for(int x:  s){
        if(mp[x]>=k)
        arr.push_back(x);
      }
      
      if(arr.empty()){
        cout<<-1<<endl;
        continue ;
      }
      
      int m=0,counter=1;
      arr.push_back(-1);
      for(int i=0;i<arr.size()-1;i++){
        if(arr[i]+1==arr[i+1])
        ++counter;
        else{
          m=max(m,counter);
          counter=1;
          }
      }

      counter=1;
      for(int i=0;i<arr.size()-1;i++){
        if(arr[i]+1==arr[i+1])
        counter++;
        else{
          if(counter==m){
          cout<<arr[i+1-m]<<" "<<arr[i]<<endl;
          break;
        }
        counter=1;
      }
      }
    }
    return 0;
}