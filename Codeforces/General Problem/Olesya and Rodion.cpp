#include<bits/stdc++.h>

using namespace std;

int n,t; 

string arr[]={"","","2","3","4","5","6","7","8","9","1"};
int main(){
    
    cin>>n>>t;
    if(t!=10){
        for(int i=0;i<n;i++)
        cout<<arr[t];
        cout<<endl;
    }
    else{
        if(n<2)
        cout<<-1<<endl;
        else{
            for(int i=1;i<n;i++)
            cout<<arr[t];
            cout<<0<<endl;
        }
    }
}