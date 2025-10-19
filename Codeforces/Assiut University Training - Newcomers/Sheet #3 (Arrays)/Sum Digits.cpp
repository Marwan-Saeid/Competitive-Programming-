#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n , m ,sum=0  ;
    cin >> n; 
    char arr[n];
    for(int i = 0; i < n ;i++)
    {
        cin >> arr[i] ;
        int m=arr[i]-'0';
        sum+=m;
    }
    cout<<sum<<endl; 
    return 0 ;
}