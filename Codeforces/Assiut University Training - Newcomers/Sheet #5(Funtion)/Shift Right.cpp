#include<bits/stdc++.h>
using namespace std  ;
void shift(int n , int m , int k , int w ,int arr[] )
{
    while(w--)
    {
    m=arr[n-1];
    for(int i=n-2;i>=0 ;i--)
    {
        k=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=k;
    }
    }
    for(int i=0 ;i<n ;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n,m,k,w;
    cin >>n>>w;
    int arr[n];
    for(int i=0 ;i<n ;i++)
    cin >>arr[i];
    shift(n,m,k,w,arr);
    return 0;
}