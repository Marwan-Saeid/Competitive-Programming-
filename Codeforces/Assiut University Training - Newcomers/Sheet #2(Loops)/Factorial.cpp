#include<iostream>
using namespace std  ;
int main ()
{
    int n  , m; 
    cin >> n ;
    for(int i =1 ;i<=n ;i++)
    {
        long long  factory=1 ;
        cin >> m;
        for(int j =1 ;j<=m ; j++ )
        {
            factory*=j ;
        }
        cout<< factory <<endl; 
    }
    return 0 ; 
}