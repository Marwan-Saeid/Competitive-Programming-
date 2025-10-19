#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s,c,w;   cin>>s>>c>>w;   s+=c;
    if(s.size()!=w.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(s.begin(),s.end());
    sort(w.begin(),w.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=w[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}