#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t; cin >>t;
    while(t--){
        int n;   cin >> n ;
        char arr[n][n];
        vector<int>v;
        for(int i=0;i<n;i++){
            int counter=0;
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='1')
                counter++;
            }
            if(counter!=0)
            v.push_back(counter);
        }
        if(v[0]!=v[1])
        cout<<"TRIANGLE"<<endl;
        else
        cout<<"SQUARE"<<endl;
    }
}