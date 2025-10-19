#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n , m , x  ;
    cin >> n>>m ;
    int arr[n][m];
    bool check =false ;
    for(int i=0;i<n;i++)
    {
        for(int j=0 ; j<m ;j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x; 
    for(int i=0 ; i< n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(x==arr[i][j])
            {
                check =true ; 
                break ;
            }
        }
    }
    if(check )
    cout <<"will not take number"<<endl;
    else 
    cout <<"will take number"<<endl; 
    return 0 ;
}