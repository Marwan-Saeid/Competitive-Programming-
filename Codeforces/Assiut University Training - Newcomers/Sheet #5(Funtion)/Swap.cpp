#include<bits/stdc++.h>
using namespace std;
void swap(int n,int m)
{
    int t=n;
    n=m;
    m=t;
    cout<<n<<" "<<m<<endl;
}
int main ()
{
    int n  , m ;
    cin >> n>>m ;
    swap(n,m) ;
    return 0 ;
}