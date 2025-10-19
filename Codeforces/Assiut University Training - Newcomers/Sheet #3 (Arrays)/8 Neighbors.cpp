#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int  n,m;
  cin>>n>>m;
  char arr[101][101];
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          cin>>arr[i][j];
      }
  }
  int k,w;
  cin>>k>>w;
  if(arr[k][w-1]!='.'&&arr[k][w+1]&&arr[k-1][w-1]!='.'&&arr[k-1][w]!='.'&&arr[k-1][w+1]!='.'&&arr[k+1][w-1]!='.'&&arr[k+1][w]!='.'&&arr[k+1][w+1]!='.')
  cout<<"yes"<<endl;
  else
  cout<<"no"<<endl;
    return 0;
}