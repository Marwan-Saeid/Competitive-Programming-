#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; 
    cin >> n; 
    int arr[n];
    int max=INT_MIN ;
    int min=INT_MAX ;
    for(int i=0 ;i< n ; i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
       if(max<arr[i])
       max=arr[i];
    }
     for(int i=0;i<n;i++)
    {
       if(min>arr[i])
       min=arr[i];
    }
     for(int i=0;i<n;i++)
    {
      if(arr[i]==max)
      cout<<min<<" ";
      else if (arr[i]==min)
      cout<<max<<" ";
      else 
      cout<<arr[i]<<" ";
    }
    
    return 0 ;
}