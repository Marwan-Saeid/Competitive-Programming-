#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n ,f; cin >>n>>f; 
    long long result =0 ;
    pair<int,int>p[n];
    vector<int>v1(n),v2(n) ;
    
    for(int i=0;i<n;i++){
        cin>>v1[i]>>v2[i];
        p[i].first=min(2*v1[i],v2[i])-min(v1[i],v2[i]);
        p[i].second=i;
    }
    
    sort(p,p+n,greater<pair<int,int>>());
    
   for(int i=0;i<f;i++){
     result+=min(2*v1[p[i].second],v2[p[i].second]);   
    }
    for(int i=f;i<n;i++){
     result+=min(v1[p[i].second],v2[p[i].second]);   
    }
    cout<<result<<endl;
}