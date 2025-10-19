#include<iostream>
#include <climits>
using namespace std ;
int main ()
{
    int n ,count=0 , min=INT_MAX  ;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>> arr[i];
    for(int i=0;i<n ; i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    for(int i=0 ; i<n ;i ++)
    {
        if(min == arr[i])
        count+=1 ;
    }
    if(count%2==0)
    cout<< "Unlucky"<<endl; 
    else 
     cout<< "Lucky"<<endl; 
    return 0 ;
}