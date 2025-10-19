#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const ll maximne=1e12;
const int N=1e5+5;
pair<int,int>arr[N];
 int n; 
 map<vector<int>,int>mp;
ll solve(int s,int rem, int min_x,int min_y,int max_x,int max_y){
  
  if(s==n) return (max_x-min_x)*(max_y-min_y);
  
  vector<int> w={s,rem,min_x,min_y,max_x,max_y};
  if(mp.find(w)!=mp.end()) return mp[w]; 
  ll op1=maximne;
  if(rem<3){
    op1=solve(s+1,rem+1,min_x,min_y,max_x,max_y);
  }
  if(!min_x)
  min_x=arr[s].first;
  if(!min_y)
  min_y=arr[s].second;
  if(!max_x)
  max_x=arr[s].first;
  if(!max_y)
  max_y=arr[s].second;
  ll op2=solve(s+1,rem,min(min_x,arr[s].first),min(min_y,arr[s].second),
    max(arr[s].first,max_x),max(arr[s].second,max_y));
    
    return mp[w]=min(op1,op2);
}
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  setIO("reduce");
 cin>>n;
  for(int i=0;i<n;i++)
  cin>>arr[i].first>>arr[i].second;
  cout<<solve( 0 , 0 , 0 ,  0 , 0 , 0)<<endl;
  return 0;
}