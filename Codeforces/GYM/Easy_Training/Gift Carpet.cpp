#include<bits/stdc++.h>

using namespace std ;

 
 int test ;
 
 
int main(){

       cin>>test; string s="vika";
    while(test--){
        
        int n,m,counter=0,c=0; cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
        }
        while(m-- &&counter!=4){
            for(int i=0;i<n;i++){
                if(s[counter]==arr[i][c]){
                    counter++;
                    break;
                }
            }
            c++;
        }
        if(counter==4)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}