#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;  cin>>t;
    while(t--){
        int n,counter=0,m=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v.push_back(8);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            counter++;
            else{
            m=max(counter,m);
                counter=0;
            }
        }
        cout<<m<<endl;
    }
}