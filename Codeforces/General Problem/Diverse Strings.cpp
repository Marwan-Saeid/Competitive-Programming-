#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t; 
    while(t--){
        string s; cin >>s; bool check=true;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]-1){
                cout<<"No"<<endl;
                check=false;
                break;
            }
        }
        if(check)
        cout<<"Yes"<<endl;
    }
    return 0;
}