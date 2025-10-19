#include<bits/stdc++.h>
using namespace std ;
int main()
{
  char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int counter=0,n,k;
  cin>>n>>k;
  for(int i=1;i<=n;i++)
  {
      if(counter!=k)
      cout<<arr[counter];
      else
      {
          counter=0;
          cout<<arr[counter];
      }
      
      counter++;
  }
}