#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a=0,b=0,c=0;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
    cin>>v[i];
    if(v[i]==1)
    a++;
    if(v[i]==2)
    b++;
    if(v[i]==3)
    c++;
    }
    int k=min(a,min(b,c));
    cout<<k<<endl;
    while(k--)
    {
        bool aa=true,bb=true,cc=true;
        for(int i=1;i<=n;i++)
        {
            if(v[i]==1&&aa==true)
            {
              v[i]=55;
                cout<<i<<" ";
                aa=false;
            }
            if(v[i]==2&&bb==true)
            {
                v[i]=55;              
                cout<<i<<" ";
                bb=false;
            }
                if(v[i]==3&&cc==true)
                {
               v[i]=55;
                cout<<i<<" ";
                cc=false;
                }
            }
        cout<<endl;
    }
}