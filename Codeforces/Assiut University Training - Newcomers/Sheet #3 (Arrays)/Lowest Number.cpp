#include<iostream>
#include <climits>
using namespace std ;
int main()
{
    int n , min=INT_MAX , k ;
    cin >> n ;
    int arr[n];
    for(int i =1;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    {
    if(arr[i]<min) {
    min=arr[i];
    k=i ;
    }
    }
    cout<<min <<" "<<k<<endl; 
    return 0 ;
}