#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,count=0;
    cin >> n;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    cin >>arr[i];
    while (true)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]%2==0)
            arr[i]/=2;
            else
            {
                cout<<count<<endl; 
                return 0 ;
            }
        }
        count++;
    }
    return 0 ;
}