#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,count=0,w=1; char c []={'G','B','I','V'};
    cin>>n;
    n-=7;
    cout<<"ROYGBIV";
    while(n--){
        if(count==4)
        count=0;
        cout<<c[count];
        count++;
        
    }
}