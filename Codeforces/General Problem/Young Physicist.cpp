#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==0&&sum2==0&&sum3==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
     return 0;
}