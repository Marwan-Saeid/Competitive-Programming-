#include<bits/stdc++.h>
using namespace std;
int main(){
    int test=1;
    cin>>test;
    while(test--){
        string word ;cin>>word ;
        bool flag=1;
       for(int i=0;i<word.size()-1;i++){
        if(word[i]==word[i+1]){
          flag=0;
          break;
        }
       }
    if(!flag)
    cout<<1<<endl;
    else
    cout<<word.size()<<endl;
    }
    return 0;
}