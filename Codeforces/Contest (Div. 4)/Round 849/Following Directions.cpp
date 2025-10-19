#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
        int n; cin>>n;
        string path; cin>>path;
        int x=0,y=0; 
        bool check=false;
        for(char c:path){
            if(c=='R') x++;
            if(c=='L') x--;
            if(c=='U') y++;
            if(c=='D') y--;
            if(x==1 && y==1) check=true;
        }
        if(check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}