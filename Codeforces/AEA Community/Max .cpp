#include<bits/stdc++.h>
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    vector<int>v;
    int x,y,z,n,max=INT_MIN;
    cin>>x>>y>>z;
    n=x+y+z;
    v.push_back(n);
    n=x+y*z;
    v.push_back(n);
    n=x*y+z;
    v.push_back(n);
    n=x*y*z;
    v.push_back(n);
     n=x*(y+z);
    v.push_back(n);
    n=(x+y)*z;
    v.push_back(n);
    for(int i=0;i<v.size();i++)
    {
        if(max<v[i])
        max=v[i];
    }
    cout<<max<<endl;
}