#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t; cin>>t;  int arr[t],k=0;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n!=m){
            cout<<"rated"<<endl;
            return 0;
        }
        else{
            arr[k]=n;
            k++;
        }
    }
    for(int i=0;i<k-1;i++){
        if(arr[i]<arr[i+1]){
            cout<<"unrated"<<endl;
            return 0;
        }
     //   cout<<arr[i]<<" ";
    }
    cout<<"maybe"<<endl;
}