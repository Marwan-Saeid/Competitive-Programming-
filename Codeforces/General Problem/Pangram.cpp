#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[27]={};
    string stetment; cin>>stetment;
    for(char c:stetment){
        if(c>='A'&&c<='Z')
           c+=32;
        arr[c-'a']++;
    }
    for(int i=0;i<=25;i++){
        if(arr[i]==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
return 0;
}