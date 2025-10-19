#include<bits/stdc++.h>
using namespace std;
bool check(vector<pair<int,int>>k){
  if(k.size()!=3) return false;
  sort(k.begin(),k.end());
  set<pair<int,int>>st;
  for(int i=0;i<3;i++){
  st.insert(k[i]);
  // cout<<k[i].first<<" "<<k[i].second<<endl;
  }
  if(st.count({k[0].first,k[0].second+1})==1 && st.count({k[0].first+1,k[0].second+1})==1)
  return true;
  if(st.count({k[0].first+1,k[0].second})==1 && st.count({k[0].first,k[0].second+1})==1)
  return true;
  if(st.count({k[0].first+1,k[0].second})==1 && st.count({k[0].first+1,k[0].second+1})==1)
  return true;
  if(st.count({k[0].first+1,k[0].second})==1 && st.count({k[0].first+1,k[0].second-1})==1)
  return true;
  return false;
}
int main(){
  int test; cin>>test;
  while(test--){
    int n, m ; cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++)
      cin>>arr[i][j];
    }
    set<pair<int,int>> sett;
    stack<pair<int,int>>st;
    vector<vector<pair<int,int>>> all_l;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        vector<pair<int,int>> temp;
        if(arr[i][j]=='*'&& sett.count({i,j})!=1){
          st.push({i,j});
          temp.push_back({i,j});
          sett.insert({i,j});
          while(!st.empty()){
            pair<int,int> k=st.top();
            st.pop();
            if(k.first-1>=0&& k.second-1>=0&&  arr[k.first-1][k.second-1]=='*' &&  sett.count({k.first-1,k.second-1})!=1){
              st.push({k.first-1,k.second-1});
              temp.push_back({k.first-1,k.second-1});
              sett.insert({k.first-1,k.second-1});
            }
            if(k.first-1>=0&& arr[k.first-1][k.second]=='*' && sett.count({k.first-1,k.second})!=1){
               st.push({k.first-1,k.second});
              temp.push_back({k.first-1,k.second});
              sett.insert({k.first-1,k.second});
            }
            if(k.first-1>=0 && k.second+1<m && arr[k.first-1][k.second+1]=='*' && sett.count({k.first-1,k.second+1})!=1){
              st.push({k.first-1,k.second+1});
              temp.push_back({k.first-1,k.second+1});
              sett.insert({k.first-1,k.second+1});
            }
            if(k.second-1>=0&& arr[k.first][k.second-1]=='*'&& sett.count({k.first,k.second-1})!=1){
              st.push({k.first,k.second-1});
              temp.push_back({k.first,k.second-1});
              sett.insert({k.first,k.second-1});
            }
            if(k.second+1<m && arr[k.first][k.second+1]=='*' && sett.count({k.first,k.second+1})!=1){
              st.push({k.first,k.second+1});
              temp.push_back({k.first,k.second+1});
              sett.insert({k.first,k.second+1});
            }
            if(k.first+1<n && k.second-1>=0 && arr[k.first+1][k.second-1]=='*' && sett.count({k.first+1,k.second-1})!=1){
              st.push({k.first+1,k.second-1});
              temp.push_back({k.first+1,k.second-1});
              sett.insert({k.first+1,k.second-1});
            }
            if(k.first+1<n && arr[k.first+1][k.second]=='*' && sett.count({k.first+1,k.second})!=1){
              st.push({k.first+1,k.second});
              temp.push_back({k.first+1,k.second});
              sett.insert({k.first+1,k.second});
            }
            if(k.first+1<n && k.second+1<m && arr[k.first+1][k.second+1]=='*' && sett.count({k.first+1,k.second+1})!=1){
               st.push({k.first+1,k.second+1});
              temp.push_back({k.first+1,k.second+1});
              sett.insert({k.first+1,k.second+1});
            }
          }
          all_l.push_back(temp);
        }
        
      }
    }
    bool flag=1;
    for(int i=0;i<all_l.size();i++){
      if(!check(all_l[i]))
      flag=0;
    }
    cout<<(flag?"YES":"NO")<<endl;
  }
  return 0;
}