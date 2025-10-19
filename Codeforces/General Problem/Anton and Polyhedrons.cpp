#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        sum+=4;
        else if(s=="Cube")
        sum+=6;
        else if(s=="Octahedron")
        sum+=8;
        else if(s=="Dodecahedron")
        sum+=12;
        else
        sum+=20;
    }
    cout<<sum<<endl;
}