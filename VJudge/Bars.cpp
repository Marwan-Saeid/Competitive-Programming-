#include<bits/stdc++.h>

using namespace std ;

#define ison(n,k) ((n>>k)&1) 

string getbinary (int x,int n){
    string s="";
    for(int j=n-1;j>=0;j--){
        s+=to_string(ison(x,j));
    }    
    return s ;
}

int main(){
    int test ; cin>>test ;
    while (test--)
    {
        int q,n; cin>>q>>n;
        int arr[n]; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool check=0;
        for(int i=0;i<(1<<n);i++){
            string s=getbinary(i,n);
            int sum=0;
            for(int j=0;j<n;j++){
                if(s[j]=='1')
                sum+=arr[j];
            }
            if(sum==q){
             
              check=1;
            }
        }
        if(!check)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}