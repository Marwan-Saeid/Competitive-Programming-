#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s,c="314159265358979323846264338327";
        cin>>s;
        int w=0,counter=0;
        bool check=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==c[w])
            {
            w++;   counter++;}
            else{
               cout<<counter<<endl;
               check=0;
               break;
            }
        }
        if(check)
        cout<<counter<<endl;
    }
}