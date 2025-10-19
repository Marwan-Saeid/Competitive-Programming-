#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,max=INT_MIN,counter=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>max)
        max=v[i];
    }
    for(auto it=v.begin();it<v.end();it++)
    {
        if(*it<max)
        counter+=max-*it;
    }
    cout<<counter<<endl;
}