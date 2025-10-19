#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,counter1=0,counter2=0;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
    cin>>v[i];
    if(v[i]%2==0)
    counter1++;
    else
    counter2++;
    }
    if(counter1>counter2)
    {
        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
                cout<<i+1<<endl;
                break;
                }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1<<endl;
                break;
                }
        }
    
        
    }
}