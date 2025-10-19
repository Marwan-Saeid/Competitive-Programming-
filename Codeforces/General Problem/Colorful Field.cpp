#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    set<pair<int,int>>s;
    vector<long long >v;
    while(k--){
        int num1,num2; cin>>num1>>num2;
        s.insert({num1,num2});
        num1--;
        long long e=num1*m+num2;
        v.push_back(e);
    }
    // for(auto it :v)
    // cout<<it<<" ";
   while(t--){
        int num1,num2; cin >>num1>>num2;
        if(s.find({num1,num2})==s.end()  ){
            long long re=(num1-1)*m+num2,m=0;
            for(long long  i=0;i<v.size();i++){
                if(v[i]<=re)
                m++;
            }
            re-=m;
            if(re%3==1)
            cout<<"Carrots"<<endl;
            else if(re%3==2)
             cout<<"Kiwis"<<endl;
             else if(re%3==0)
             cout<<"Grapes"<<endl;
        }
        else{
            cout<<"Waste"<<endl;
         }
    }
}