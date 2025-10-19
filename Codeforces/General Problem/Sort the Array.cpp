#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n ,first=0; cin>>n;  bool check =1;
    vector<int>v(n);
    int l=0,r=n-1;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(first<=v[i])
        first=v[i];
        else
        check=0;
    }
    
    first=v[0];
    
    if(check){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0 ;
    }
    else{
        for(int i=1;i<n;i++){
            if(first<v[i]){
                l=i;
            }
           else
           break;
            first=v[i];
        }
            first=v[n-1];
        for(int i=n-2;i>=0;i--){
            if(first>v[i]){
                r=i;
            }
           else
           break;
            first=v[i];
        }
      
        reverse(v.begin()+l,v.begin()+r+1);
        
        check=1;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                cout<<"no"<<endl;
                return 0 ;
            }
        }
    }
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
}