#include <bits/stdc++.h>

using namespace std  ;

int n ,m,k,t;

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(m==0){
            if(n!=0)
            cout<<string(n+1,'0');
            else
            cout<<string(k+1,'1');
            cout<<endl;
            continue ;
        }
        string s="";
        for(int i=0;i<=m;i++){ //101
            if(i%2==0) s+='1';
            else  s+='0';
        }
        //10001
        string w(n,'0') ,e(k,'1') ,a="";
        for(int i=0;i<s.size();i++){
              a+=s[i];
            if(i==1){
                a+=w;
                continue;
            }
        }
        s=a;
        a="";
        //10001
        //1110001
        for(int i=0;i<s.size();i++){
            a+=s[i];
            if(i==0){
                a+=e;
                continue;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
