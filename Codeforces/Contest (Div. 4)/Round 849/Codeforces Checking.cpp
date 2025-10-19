#include<bits/stdc++.h>
using namespace std;
int main(){
    string code="codeforces";
    int f[26]={};
    // to put all character in word codeforces true 
    for(int i=0;i<code.size();i++)
    f[code[i]-'a']++;

    int t; cin>>t;
    while(t--){ // time complexity O(t)
        char ch; cin>>ch;
        if(f[ch-'a']){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}