#include<iostream>
using namespace std;
int main(){
    
    int size; cin>>size;
    int arr[size];
    
    for(int& x: arr) cin>>x;
    
    for(int i=1;i<size;i++){
        int temp=arr[i],index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                swap(arr[j],arr[index]);
                index--;
            }
        }
    }
    
    for(int x: arr)
    cout<<x<<" ";
    
}