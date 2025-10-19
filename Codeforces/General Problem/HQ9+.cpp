#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s,c="HQ9";
    cin>>s;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==c[i])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}