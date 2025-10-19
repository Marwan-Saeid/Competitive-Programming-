#include<bits/stdc++.h>
using namespace std ;
int main(){
    int test=1;
    cin>>test;
    while(test--){
        int n; cin>>n;
        int result=0;
        char arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>arr[i][j];
        }
        int circle=n/2;
        for(int i=0;i<circle;i++){
                int x=i,w=n-1-i;
                int a[w]={};
                int counter=0;
                for(int j=x;j<=w;j++){
                    a[counter++]+=arr[x][j]-'0';
                }
                counter=0;
                for(int j=x;j<=w;j++){
                    a[counter++]+=arr[j][w]-'0';
                }
                counter=0;
                for(int j=w;j>=x;j--){
                   a[counter++]+=arr[w][j]-'0';
                }
                counter=0;
                for(int j=w;j>x;j--){
                    a[counter++]+=arr[j][x]-'0';
                }
                for(int j=0;j<w-i;j++){
                    result+=min(a[j],4-(a[j]));
                  
                }
        }
             cout<<result<<endl;


    }
    return 0;
}