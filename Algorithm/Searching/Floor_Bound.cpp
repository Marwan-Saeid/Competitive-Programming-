#include <iostream>
using namespace std;

// floor_bound is a function used with sorted arrays or lists to find
// the index of the last element that is less than or equal to (<=) a given value.
// If there is no such element, the function usually returns -1.
int floor_bound(int items[],int size,int value){
  int left=0,right=size-1,ans=-1;
  while(left<=right){
    int mid=(left+right)/2;
    if(items[mid] <=value){
      ans=mid;
      left=mid+1;
    }else{
      right=mid-1;
    }
  }
  return ans;
}
int main() 
{
   int size; cin>>size;
   int items[size];
   for(int&x :items) cin>>x;
   
   
   int value; cin>>value;
   
   cout<<floor_bound(items,size,value)<<endl;
  return 0;
}