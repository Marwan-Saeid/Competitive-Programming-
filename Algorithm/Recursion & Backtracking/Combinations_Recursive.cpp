#include<bits/stdc++.h>
using namespace std;

int n ,k; 
const int Max=1e5+5;
int arr[Max];

vector<int >temp;

void combination(int index ){
  
  if(temp.size()==k){
    
    for(int x:temp)
    cout<<x<<" ";
    
    cout<<endl;
    
    return ;
  }
  
  if (index==n) return ;
  
  
  temp.push_back(arr[index]);
  combination(index+1);
  
  temp.pop_back();
  combination(index+1);
  
}
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  combination(0);
  
}