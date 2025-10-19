#include<bits/stdc++.h>

using namespace std ;

 const int N = 20000 ;

 map< int , vector < int > > mp;

 vector< bool > ve(N+1);

 //vector< int > arr(N+1) ;

int n , m , u , v , counter=0 ;

bool  tra(int node,int p){
  ve[node]=true ;
  for(int  x : mp[node] ){
    if(!ve[x]){
      //if(tra( x , node )) return 1;
       tra( x , node ) ;
    }
    else if( ve[x] && x != p){
            return true ;
        }
    }
  return false ;
}

/*

6 6
1 3
1 2
2 4
3 4
3 5
3 6

*/

int main(){
   cin >>n>>m;
   int start ;
   for(int i=0;i<m;i++){
    cin >>u>>v;
    mp[u].push_back(v);
    mp[v].push_back(u);
    start=u;
   }
   if(tra(start,0)==false  && n==m+1 )
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

 return 0 ;
}
