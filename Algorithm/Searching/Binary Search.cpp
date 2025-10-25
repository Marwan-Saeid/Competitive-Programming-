#include<iostream>
using namespace std;
int main(){
  int size; cin>>size;
  int item[size];
  for(int& x:item) cin>>x;
  
  int value; cin>>value;
  int left=0,right=size-1;
  while(left<right){
    int mid=(left+right)/2;
    if(item[mid]==value){
      cout<<"Found"<<endl;
      return 0;
    }
    if(item[mid]>value){
      right=mid;
    }
    else{
      left=mid;
    }
  }
  cout<<"Not Found"<<endl;
  return 0;
}