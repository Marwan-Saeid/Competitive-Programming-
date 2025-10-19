#include<bits/stdc++.h>
using namespace std ;
void timee (int n ,char s)
{
    for(int i=0 ;i<n;i++)
    cout<<s<<" ";
    cout<<endl;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin >> n;
        char s;
        cin >>s;
        timee(n,s);
    }
    return 0 ;
}