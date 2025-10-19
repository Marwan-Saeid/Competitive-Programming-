#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;cin>>test;
  while(test--){
    
    int n; cin>>n;
    int arr[n];
    vector<int>fre;
    bool lb[n],rb[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int temp=1,cur=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]==cur)
      temp++;
      else{
      fre.push_back(temp);
        temp=1;
      }
      cur=arr[i];
    }
    fre.push_back(temp);
    
    cur=arr[0];
    lb[0]=true;  
    bool check=1;
    for(int i=1;i<n;i++){
      if(arr[i]<=cur && check){
      lb[i]=true;
      cur=arr[i];
      }
      else{
      lb[i]=false;
      check=0;
      }
    }
    
    check=1;
    cur=arr[n-1];
    rb[n-1]=true;
    for(int i=n-2;i>=0;i--){
      if(arr[i]<=cur && check){
      rb[i]=true;
      cur=arr[i];
      }
      else{
      rb[i]=false;
        check=0;
      }
    }
    
    
    // for(int x:fre)
    // cout<<x<<' ';
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // cout<<lb[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // cout<<rb[i]<<" ";
    // cout<<endl;
    
    int count=0;
    int l=-1,r=-1;
    for(int x:fre){
      l=r+1;
      r+=x;
      if(l==0){
        if(rb[r]){  
        count++;
        }
      }
      else if(r==n-1){
        if(lb[l]){
      count++;
        }
      }
      else{
        if(rb[r] && lb[l]){
         count++;
        }
      }
    }
    cout<<((count==1)?"YES":"NO")<<endl;
    
  }
  return 0;
}