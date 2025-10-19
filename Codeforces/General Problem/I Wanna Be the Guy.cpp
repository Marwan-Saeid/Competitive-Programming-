#include<bits/stdc++.h>

using namespace std ;

int n,size1,size2,arr1[105],arr2[105],game[105]={};

bool check=1;

int main(){
    cin>>n>>size1;
    for(int i=1;i<=size1;i++){
        cin>>arr1[i];
        ++game[arr1[i]];
    }
    cin>>size2;
    for(int i=1;i<=size2;i++){
        cin>>arr2[i];
        ++game[arr2[i]];
    }
    for(int i=1;i<=n;i++){
        if(!game[i]){
            cout<<"Oh, my keyboard!"<<endl;
            check=0;
            break;
        }
    }
    if(check)
    cout<<"I become the guy."<<endl;
}