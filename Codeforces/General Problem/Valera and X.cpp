#include<bits/stdc++.h>

using namespace std ;

int n; char arr[300][300],c;

set <char>s;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            s.insert(arr[i][j]);
        }
    }
    c=arr[0][0];
    if(s.size()!=2){
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j||n-1-j==i)&&arr[i][j]!=c){
             cout<<"NO"<<endl;
        return 0;
            }
            if((i!=j&&n-1-j!=i)&&arr[i][j]==c){
             cout<<"NO"<<endl;
        return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    }
}