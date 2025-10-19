#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t; cin>>t;
    while(t--){
    char arr[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        cin>>arr[i][j];
    }
    int k=0,l=10,sum=0,counter=1;
    for(int a=1;a<=5;a++){
        for(int i=k;i<l;i++){
        for(int j=k;j<l;j++)
       {
           if(i==k||i==l-1){
               if(arr[i][j]=='X')
               sum+=counter;
           }
           else if(j==k||j==l-1)
           {
            if(arr[i][j]=='X')
               sum+=counter;
           }
       }
    }
    k++;l--;counter++;
    }
    cout<<sum<<endl;
}
}