#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test ; cin>>test;
    while(test--){
        int arr[3];
        for(int i=0;i<3;i++)
        cin>>arr[i];
        if(arr[0]+arr[1]==arr[2])
        cout<<"+"<<endl;
        else
        cout<<"-"<<endl;
    }
}