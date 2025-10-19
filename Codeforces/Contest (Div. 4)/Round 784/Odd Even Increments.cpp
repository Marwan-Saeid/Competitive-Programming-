#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
        int size ; cin>>size;
        int item[size];
        for(int i=0;i<size;i++){
            int x;cin>>x;
            item[i]=x%2;
        }
        bool check=true;
        for(int i=0;i<size;i++){
            if(i%2==0){
                if(item[i]!=item[0]){
                    check=false;
                    break;
                }
            }
            else{
                if(item[i]!=item[1]){
                    check=false;
                    break;
                }
            }
        }
        cout<<((check)? "YES":"NO")<<endl;
    }
    return 0;
}