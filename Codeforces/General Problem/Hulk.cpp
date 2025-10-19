#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        if(t!=0)
        cout<<"I hate that ";
        else
        {
        cout<<"I hate it";
        return 0;
        }
        t--;
        if(t!=0)
            cout<<"I love that ";
        else 
            cout<<"I love it";
    }
    return 0;
}