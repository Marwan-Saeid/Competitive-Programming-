#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test; cin>>test;
    while(test--){
        int n,m,c=0; cin>>n>>m;
        while(n || m){
            if(m>=2&&n>=7){
                c++; m-=2; n-=7;
            }
            else if(m==0){
                c++;
                if(n>15)
                n-=15;
                else
                n=0 ;
            }
            else if(m>=2&&n<7){
               c++;
               m-=2; n=0;
            }
            else if(m<2&&n>=7){
               c++;
               m=0; 
               if(n>=11)
               n-=11;
               else
                n=0;
            }
            else if(m<2&&n<7){
               c++;
               m=0; n=0;
            }
        }
        cout<<c<<endl;
    }
}