#include<bits/stdc++.h>

using namespace std ;

char arr[31][31];

int d(int a,int b, int c, int d){
    return (a-c)*(a-c)+(b-d)*(b-d);
}

int main(){
    
    int n, m ,x ; cin >>n>>m>>x;
    vector<pair<int ,int >> set , ve[26] ;
  
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           cin>>arr[i][j];
           if(arr[i][j]=='S'){
               set.push_back({i,j});
           }
           else{
               ve[arr[i][j]-'a'].push_back({i,j});
            
           }
       }
   }
   
   vector<bool >check(26,0);
   
 for(int w=0;w<26;w++){
     bool flag=0;
     if(!ve[w].empty()){
     for(int i=0;i<ve[w].size() && !check[w];i++){
            for(int j=0;j<set.size();j++){
                
int k = d(ve[w][i].first , ve[w][i].second ,set[j].first,set[j].second );

                if(k<=x*x){
                    check[w]=1;
                    flag=1;
                    break; 
                }
            }
            if(flag){
            break; 
            }
        }
 }
 }
 
//  for(int i=0;i<26;i++){
//      cout<<check[i]<<" ";
//  }
 
    int q , counter=0; cin >>q; string str ; cin >>str ; 
    for(char c : str){
        if(islower(c)){
        if(ve[c-'a'].empty()){
            cout<<-1<<endl;
            return 0 ;
        }
        }
        else{
            c=tolower(c);
            if(ve[c-'a'].empty() ) {
            cout<<-1<<endl;
            return 0 ;
        }
        if(set.empty()){
            cout<<-1<<endl;
            return 0 ;
        }
        
        if(!check[c-'a']) counter++;

        
        }
}

      cout<<counter<<endl;
}