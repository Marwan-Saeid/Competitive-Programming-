#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int arr[4];
    for(int i=0;i<4;i++)
    cin>>arr[i];
    sort(arr,arr+4);
    cout<<arr[3]-arr[0]<<" ";
     cout<<arr[3]-arr[1]<<" ";
      cout<<arr[3]-arr[2]<<" ";
}