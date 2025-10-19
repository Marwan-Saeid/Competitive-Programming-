#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int k=arr[0],counter=0;
        bool flag =1;
        for(int i=0;i<n;i++){
            if(k==arr[i])
            counter++;
            else
            counter=1;
            if(counter==3){
                cout<<arr[i]<<endl;
                flag=0;
                break;
            }
            k=arr[i];
        }
        if(flag)
        cout<<-1<<endl;
    }
}