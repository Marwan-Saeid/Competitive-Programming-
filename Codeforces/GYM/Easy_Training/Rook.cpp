#include<bits/stdc++.h>

using namespace std ;

string s;

 char  arr[]={'a','b','c','d','e','f','g','h'};
 
 int test,n;
int main(){

       cin>>test;
    while(test--){
    cin>>s; n=s[1]-'0';
    for(int i=1;i<=8;i++){
        if(i!=n)
            cout<<s[0]<<i<<endl;
    }

    for(int i=0;i<8;i++){
        if(arr[i]!=s[0])
        cout<<arr[i]<<n<<endl;
    }
    }

}