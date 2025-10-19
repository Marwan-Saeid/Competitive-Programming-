#include<bits/stdc++.h>
using namespace std;
bool Knowbit(long long n,int i)
{
    return (n>>i)&1;
}
int main(){
  int test; cin>>test;
  while(test--){
    int n ; cin>>n;
    int arr[n];
    map<int,int> mp; 
    set<int>s;
    
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
      s.insert(arr[i]);
    }
   int result=0;
   set<int>felter;
   vector<int> a;
   for(int i=0;i<n;i++){
     int temp=INT_MIN,max=result;
     for(int j=0;j<n;j++){
       if(felter.count(arr[j])) continue;
       if((result|arr[j])>max){
         max=result|arr[j];
         temp=arr[j];
       }
     }
     if(temp==INT_MIN) break;
     a.push_back(temp);
     felter.insert(temp);
     result=max;
     mp[temp]--;
   }
   
   for(int x: a) 
   cout<<x<<" ";
   
  for(int x: s){
    while(mp[x]){
      cout<<x<<" ";
      mp[x]--;
    }
  }
   cout<<endl;
  }
  return 0;
}