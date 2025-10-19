#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,m; cin>>n>>m;
    int arr1[m],arr2[m],counter=n,size=0;
    for(int i=0;i<m;i++)
    cin>>arr1[i]>>arr2[i];
    for(int i=0;i<m;i++){
        for(int j=0;j<m-1;j++){
            if(arr2[j]<arr2[j+1]){
                swap(arr2[j],arr2[j+1]);
                swap(arr1[j],arr1[j+1]);
            }
        }
    }
    for(int i=0;i<m;i++){
            if(counter>=arr1[i]){
                size+=arr2[i]*arr1[i];
                counter-=arr1[i];
            }
            else{
                size+=arr2[i]*counter;
                break;
            }
        }
    cout<<size<<endl;
}