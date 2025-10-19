#include<iostream>
using namespace std ;
int main ()
{
    int n, t ;
    cin>>n ;
    int arr[n];
    for(int i=0 ;i<n;i++)
    cin>>arr[i] ;
    for(int i=0;i<n;i++)
    {
        for(int w=0; w<n-1;w++)
        {
            if(arr[w]>arr[w+1])
            {
                t=arr[w];
                arr[w]=arr[w+1];
                arr[w+1]=t;
            }
        }
    }
    for(int w=0;w<n;w++)
    cout<<arr[w]<<" " ;
    return 0 ;
}