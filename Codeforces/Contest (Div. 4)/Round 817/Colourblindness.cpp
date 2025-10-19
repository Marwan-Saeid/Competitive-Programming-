#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test ;
    while(test--){
        int size; cin>>size;
        string s1,s2;cin>>s1>>s2;
        bool check=1;
        for(int i=0;i<size;i++){
            if(s1[i]!=s2[i]){
                if((s1[i]=='R' && s2[i]!='R')||(s2[i]=='R' && s1[i]!='R')){
                    check=0;
                    break;
                }
            }
        }
        if(check)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}