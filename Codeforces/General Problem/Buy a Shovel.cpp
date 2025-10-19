#include<bits/stdc++.h>
using namespace std ;
int main ()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int i=1;
    while(true)
    {
        int m=i*n; 
        short w=m%10; 
        if(w==0||w==k)
        {
        cout<<i<<endl;
        return 0;
        }
        i++;
    }
}