#include<bits/stdc++.h>
using namespace std;
void max_min( int n ,int arr[])
{
    int max=INT_MIN,min=INT_MAX ;
    for(int i=0 ;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    cout<<min<<" ";
    for(int i=0 ;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max<<endl;
}
int main ()
{
    int n ;
    cin >>n;
    int arr[n];
    for(int i=0 ;i<n;i++)
    cin >>arr[i];
    max_min(n,arr) ;
    
}