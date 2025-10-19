#include<bits/stdc++.h>
using namespace std;
int check(int a,int b){
    if(a>b) return 1;
    else if(a==b) return 0;
    else return INT_MIN ;
}
int main(){
    int test; cin>>test;
    while(test--){
        int A[4],result=0;
        for(int i=0;i<4;i++) cin>>A[i];
        if(check(A[0],A[2])+check(A[1],A[3])>0)
        result+=2;
        if(check(A[0],A[3])+check(A[1],A[2])>0)
        result+=2;
        cout<<result<<endl;
    }
    return 0;
}