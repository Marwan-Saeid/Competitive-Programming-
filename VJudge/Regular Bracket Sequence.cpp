#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    string s; cin>>s;
    int counter=0,size=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
        counter++;
        else
        counter--;
        if(counter<0){
            size--;
            counter=0;
        }
    }
    cout<<size-counter<<endl;
}