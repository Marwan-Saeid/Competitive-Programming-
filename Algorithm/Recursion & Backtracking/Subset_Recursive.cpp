#include<bits/stdc++.h>
using namespace std;

int n ; 
const int Max=1e5+5;
int arr[Max];

vector<int >temp;

void subset(int index ){
  
  if(index==n){
    for(int x:temp)
    cout<<x<<" ";
    cout<<endl;
    return ;
  }
  
  temp.push_back(arr[index]);
  subset(index+1);
  temp.pop_back();
  subset(index+1);
  
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  subset(0);
  
}