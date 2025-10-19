#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t,size=0;
    cin>>t;
    string s,c;
    cin>>s;
    c=s;
    while((t-1)>0)
    {
        cin>>s;
        if(s!=c)
        size++;
        t--;
        c=s;
    }
    cout<<size+1<<endl;
    return 0;
}