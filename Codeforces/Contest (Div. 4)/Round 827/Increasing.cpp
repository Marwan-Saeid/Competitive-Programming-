#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin>>test;
    while(test--){
        int size ; cin>>size;
        int A[size];
        for(int i=0;i<size;i++) cin>>A[i];
        sort(A,A+size);
        bool check=1;
        for(int i=0;i<size-1;i++){
            if(A[i]>=A[i+1]) check=0;
        }
        cout<<((check)?"YES":"NO")<<endl;
    }
    return 0;
}