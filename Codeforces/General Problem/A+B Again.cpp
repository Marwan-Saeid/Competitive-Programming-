#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
        short num,part; cin>>num;
        part=num%10;
        num/=10;
        cout<<num+part<<endl;
    }
    return 0;
}