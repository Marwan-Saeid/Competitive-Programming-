#include<bits/stdc++.h>
using namespace std ;
int main(){
    int arr[3]={},counter=0; char c[]={'A','B','C'};
    for(int i=0;i<3;i++){
        string s;cin>>s;
        if(s[1]=='>'){
            if(s[0]=='A')
            ++arr[0];
            else if(s[0]=='B')
            ++arr[1];
            else if (s[0]=='C')
            ++arr[2];
        }
        else{
            if(s[2]=='A')
            ++arr[0];
            else if(s[2]=='B')
            ++arr[1];
            else if (s[2]=='C')
            ++arr[2]; 
        }
    }
    if(arr[0]==2&&arr[1]==1&&arr[2]==0||arr[0]==2&&arr[1]==0&&arr[2]==1||arr[0]==1&&arr[1]==2&&arr[2]==0||arr[0]==0&&arr[1]==2&&arr[2]==1||arr[0]==1&&arr[1]==0&&arr[2]==2||arr[0]==0&&arr[1]==1&&arr[2]==2){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[j]==counter)
            cout<<c[j];
        }
        counter++;
    }}
    else
    cout<<"Impossible"<<endl;
}