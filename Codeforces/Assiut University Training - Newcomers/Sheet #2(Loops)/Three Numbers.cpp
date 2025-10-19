#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int k, s ,counter=0;
    cin >>k >>s;
    for(int x=0;x<=k;x++)
    {
       
            for(int z=0;z<=k;z++)
            {
                if((s-x-z)>=0&&(s-x-z)<=k)
                counter++;
            }
    }
    cout<<counter<<endl;;
    
    return 0 ;
}