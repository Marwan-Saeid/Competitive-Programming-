#include<iostream>
using namespace std;
int main(){
    
    int size; cin>>size;
    int arr[size];
    
    for(int& x: arr) cin>>x;
    
    for(int i=0;i<size-1;i++){
        int index=i,temp=arr[i];
        for(int j=i+1;j<size;j++){
            if(arr[j]<temp){
            index=j;
            temp=arr[j];
            }
        }
        swap(arr[index],arr[i]);
    }
    
    for(int x: arr)
    cout<<x<<" ";
    
}