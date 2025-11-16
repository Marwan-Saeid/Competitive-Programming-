#include <iostream>
using namespace std;

// upper_bound is a function used with sorted arrays or vectors to find the index of the first element that is
// strictly greater ( > ) than a given value
// If there is no element greater than the given value, the function usually returns -1
int upper_bound(int items[],int size,int value){
  int left=0,right=size-1,ans=-1;
  while(left<=right){
    int mid=(left+right)/2;
    if(items[mid]>value){
      ans=mid;
      right=mid-1;
    }else{
      left=mid+1;
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
   
   cout<<upper_bound(items,size,value)<<endl;
  return 0;
}