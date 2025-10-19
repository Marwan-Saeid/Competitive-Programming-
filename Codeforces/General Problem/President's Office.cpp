#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int n,m;  char k,c;
    cin>>n>>m>>k;
    set<char>s;
    vector<vector<int>>v(n);
    
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>c;
           v[i].push_back(c);
       } 
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k==v[i][j]){
            if(i>0&&v[i-1][j]>='A'&&v[i-1][j]<='Z'&&v[i-1][j]!=k)
                s.insert(v[i-1][j]);
            if(j>0&&v[i][j-1]>='A'&&v[i][j-1]<='Z'&&v[i][j-1]!=k)
                s.insert(v[i][j-1]);
          if(i<n-1&&v[i+1][j]>='A'&&v[i+1][j]<='Z'&&v[i+1][j]!=k)
                s.insert(v[i+1][j]);
            if(j<m-1&&v[i][j+1]>='A'&&v[i][j+1]<='Z'&&v[i][j+1]!=k)
                s.insert(v[i][j+1]);    
        }
    }
    }
 
    cout<<s.size()<<endl;
    
}