#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m ;
    cin >>n>>m;
    int i=0;
    while(true)
    {
        if(n>m)
        {
            cout<<i<<endl;
            return 0;
        }
        n*=3;
        m*=2;
        i++;
    }
}