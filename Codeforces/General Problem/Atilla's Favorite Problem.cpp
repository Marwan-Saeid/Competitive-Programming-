#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
        int size; cin>>size;
        string st; cin>>st;
        char c='a';
        for(char ch: st){
            if(ch>c)
            c=ch;
        }
        cout<<(c-'a')+1<<endl;
    }
    return 0;
}