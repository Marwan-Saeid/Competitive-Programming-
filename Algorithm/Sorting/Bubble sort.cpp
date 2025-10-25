#include<iostream>
using namespace std;
int main(){
    
    int size; cin>>size;
    int arr[size];
    
    for(int& x: arr) cin>>x;
    
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
    
    for(int x: arr)
    cout<<x<<" ";
    
}