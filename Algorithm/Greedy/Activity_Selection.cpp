#include <bits/stdc++.h>
using namespace std;
bool com(pair<int,int >a ,pair<int,int>b){
  
  return a.second < b.second;
}
int main() 
{
  int size; cin>>size;
  
  vector<pair<int,int>>points;
  
  while(size--){
    int x,y; cin>>x>>y;
    points.push_back({x,y});
  }
  
  sort(points.begin(),points.end(),com);
  
  int end=INT_MIN;
  vector<pair<int,int>>result;
  
  for(auto &x:points){
    if(x.first>=end){
      result.push_back(x);
      end=x.second;
    }
  }
  for(auto &x:result)
  cout<<x.first<<" "<<x.second<<endl;
  cout<<result.size()<<endl;
  return 0;
}