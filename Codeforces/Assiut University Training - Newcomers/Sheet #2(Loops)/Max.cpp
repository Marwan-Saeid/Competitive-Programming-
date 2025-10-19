#include<iostream>
#include <climits>
using namespace std ;
int main()
{
    int n  , max=INT_MIN  ,  y ;
    cin >> n ;
    for(int i = 1 ; i<=n ; i++)
    { 
        cin>>y ;
        if(max<=y)
        {
            max=y ; 
        }
    }
    cout<<max <<endl; 
    return 0 ;
}