#include<bits/stdc++.h>
using namespace std ;
int main(){
ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    string s;
    bool check=1;
    while(getline(cin,s)){
        if(s.size()==0||s==" ")
        continue ;
        bool flag=0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='/'&&s[i+1]=='*'){
                i++;
                check=0;
            }
            else if(s[i]=='*'&&s[i+1]=='/'&&check==0){
                i++;
            check=1;
            }
           else if(s[i]=='/'&&s[i+1]=='/'&&check==1){
                break;
            }
            else if( check==1)
            {
             cout<<s[i];
             flag=1;
            }
        }
        if(flag==1&&check==1)
        cout<<endl;
    }
}