#include<bits/stdc++.h>
using namespace std;
const int M=1e7+2;
int main(){
  map<int ,vector<int>>mp;
  for(int i=1;i<3333334;i++){
    mp[i*3].push_back(i);
    mp[i*3].push_back(i*2);
  }
  int test;
  cin>>test;
  while(test--){
    int n, m; cin>>n>>m;
    if(n==m)
    cout<<"YES"<<endl;
    else if(n%3==0 && n>=m){
      stack<int>st;
      set<int > visited;
      
      st.push(n/3);
      st.push((n/3)*2);
      
      bool check=0;
      while(!st.empty() && !check){
        int y=st.top();
        st.pop();
        
        if(visited.count(y)){
          continue;
        }
        
        if(y==m){
          check=1;
          break;
        }
        
        visited.insert(y);
        for(int x:mp[y]){
          if(x==m){
            check=1;
            break;
          }
          st.push(x);
        }
      }
      cout<<(check?"YES":"NO")<<endl;
    }
    else
    cout<<"NO"<<endl;
  }
  return 0;
}