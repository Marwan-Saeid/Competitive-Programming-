#include<bits/stdc++.h>
using namespace std;
int main(){
    int test ;cin>>test;
    while(test--){
        char A[8][8];
        
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
            cin>>A[i][j];
        }
        bool check=0;int x=0,y=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                int counter=0;
                if(A[i][j]=='#'){
                    if(i+1<8 && j+1<8 && A[i+1][j+1]=='#')
                    counter++;
                    if(i+1>=0 && j+1>=0 && A[i-1][j-1]=='#')
                    counter++;
                    if(i+1<8 && j+1>=0 && A[i+1][j-1]=='#')
                    counter++;
                    if(i+1>=0 && j+1<8 && A[i-1][j+1]=='#')
                    counter++;
                }
                if(counter==4)
                x=i,y=j;
            }
        }
        cout<<x+1<<" "<<y+1<<endl;
       
    }
    return 0;
}