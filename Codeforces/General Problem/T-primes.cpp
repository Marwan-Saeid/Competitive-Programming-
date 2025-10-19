#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<bool>prime(1000005,true);
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i)
            prime[j]=0;
        }
    }
    int test; cin>>test;
    while(test--){
        long long number; cin>>number;
        int r=sqrt(number);
        if(r==sqrt(number)){
        if(prime[r])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}