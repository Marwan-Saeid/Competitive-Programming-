#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ; cin>>test;
    while(test--){
        long long num; cin>>num;
        int counter1=0,counter2=0,counter3=0;
        while(num%2==0){
            num/=2;
            counter1++;
            }
        while(num%3==0){
            num/=3;
            counter2++;
            }
        while(num%5==0){
            num/=5;
            counter3++;
            }
        if(num==1)
        cout<<counter1+counter2*2+counter3*3<<endl;
        else 
        cout<<-1<<endl;
    }
    return 0;
}