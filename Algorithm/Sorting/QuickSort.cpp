#include<iostream>
using namespace std;
void QuickSort(int arr[],int first,int end){
  if(first>=end) return;
  
  
  int i=first-1,pivot=arr[end];
  for(int j=first;j<end;j++){
    if(arr[j]<pivot)
    swap(arr[++i],arr[j]);
  }
  
  swap(arr[++i],arr[end]);
  
  QuickSort(arr,first,i-1);
  QuickSort(arr,i+1,end);
  
}
int main(){
  int size;cin>>size;
  int items[size];
  for(int&x : items) cin>>x;
  QuickSort(items,0,size-1);
  for(int item:items)
  cout<<item<<" ";
  cout<<endl;
  return 0;
}