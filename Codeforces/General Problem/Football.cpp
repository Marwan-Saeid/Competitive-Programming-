#include<bits/stdc++.h>

using namespace std ;

string team1,team2,str ;

int arr[5]={},num;

int  main(){
    cin>>num>>team1;
    for(int i=1;i<num;i++){
        cin>>str;
        if(str==team1)
        ++arr[0];
        else{
          team2=str;
          ++arr[1];
        }
    }
    if(arr[0]+1>arr[1])
    cout<<team1<<endl;
    else
    cout<<team2<<endl;
}