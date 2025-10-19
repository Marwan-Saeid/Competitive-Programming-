#include<bits/stdc++.h>

using namespace std ;

int n; 

string s;

map<string ,int>mp ;

int main(){
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(!mp[s])
        cout<<"OK"<<endl;
        else
        cout<<s<<mp[s]<<endl;
        mp[s]++;
    }
}