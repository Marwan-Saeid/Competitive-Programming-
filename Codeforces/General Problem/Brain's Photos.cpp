#include<bits/stdc++.h>

using namespace std ;

int row ,column,arr[3]={} ; 
string str;

int main(){
    cin>>row >>column ;
    row*=column ;
    for(int i=0;i<row ;i++){
        cin>>str;
        if(str=="C")
        arr[0]++;
        else if(str=="M")
        arr[1]++;
        else if(str=="Y")
        arr[2]++;
    }
    if(arr[0]||arr[1]||arr[2])
    cout<<"#Color"<<endl;
    else
    cout<<"#Black&White"<<endl;
    
}