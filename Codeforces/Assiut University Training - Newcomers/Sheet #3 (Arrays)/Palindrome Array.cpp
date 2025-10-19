#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cin >>n; 
    int arr[n];
    int m=n-1 ;
    bool y=true ;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n/2;i++)
  {
      if(arr[i]==arr[m])
      m--;
      else 
      y=false ;
  }
  if(y)
  cout<<"YES"<<endl; 
  else 
    cout<<"NO"<<endl; 
    return 0 ;
}