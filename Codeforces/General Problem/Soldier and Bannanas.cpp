#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum+=k*i;
    }
    sum=sum-n;
    if(sum<0)
    sum=0;
    cout<<sum<<endl;
    return 0 ;
}