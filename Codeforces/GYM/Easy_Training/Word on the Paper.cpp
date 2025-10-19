#include<bits/stdc++.h>

using namespace std ;

 
 int test ,n;
 
 
int main(){

       cin>>test;
    while(test--){
        
        char arr[8][8]; 
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
               if(arr[i][j]>='a'&&arr[i][j]<='z')
               cout<<arr[i][j];
            }
        }
        cout<<endl;
    }

}