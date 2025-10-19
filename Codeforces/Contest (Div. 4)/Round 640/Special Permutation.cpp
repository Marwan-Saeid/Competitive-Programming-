#include<iostream>  
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int k=n;
        if(n<4){
            cout<<-1<<endl;
            continue;
        }
        if(n%2==0)
        n--;
        while(n>=1){
            cout<<n<<" ";
            n-=2;
        }
        cout<<4<<" "<<2<<" ";
        for(int i=6;i<=k;i+=2)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}