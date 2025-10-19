#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long size;
    cin>>size;
    if(size%2==0)
    cout<<size/2<<endl;
    else
    cout<<-(size/2+1)<<endl;
    return 0;
}