#include<iostream>
using namespace std ;
int main ()
{
    int n  , m ,  k; 
    cin >> n >> m ;
    for(int i = 1 ; i<=n || i<=m ; i++)
    {
        if(n%i==0 && m%i==0)
        k=i ; 
    }
    cout<<k<<endl; 
  return 0 ; 
}