#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; string s="vika";
    while(test--){
        int n; cin>>n;
        if(n%3==0){
            cout<<"Second"<<endl;
            continue;
        }
        else{
            if((n-1)%3==0){
            cout<<"First"<<endl;
            continue;
            }
            else if((n+1)%3==0){
            cout<<"First"<<endl;
            continue;
            }
        }
    }

}