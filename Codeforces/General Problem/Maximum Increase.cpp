#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,counter=0,m=0,k=0; cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++)
    cin>>dq[i];
    dq.push_back(0);
    for(int i=0;i<n+1;i++){
        if(k<dq[i])
        counter++;
        else{
            m=max(m,counter);
            counter=1;
        }
        k=dq[i];
    }
    cout<<m<<endl;
}	