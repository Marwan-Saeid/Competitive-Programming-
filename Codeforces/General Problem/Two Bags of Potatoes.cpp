#include<bits/stdc++.h>
using namespace std ;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    bool flag=1;
    if(y>=n){
        cout<<-1<<endl;
        return 0;
    }
    int x=k-(y%k);
    while(true){
        if(y+x<=n)
        {
        cout<<x<<" "; flag=0;}
        else{
            if(flag==1){
            cout<<-1<<endl;}
        return 0;}
        x+=k;
    }
}