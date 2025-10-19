#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,k=INT_MIN;
    cin>>n;
    vector<int>v(n);
    vector<int>s(1);
    for(int i=0;i<n;i++)
    cin>>v[i];
   for(int i=0;i<n;i++)
   {int counter=0,max=INT_MIN;
       for(int j=i;j<n;j++)
       {
          if(max<=v[j])
          {
              max=v[j];
              counter++;
          }
          else
          break;
       }
    if(counter>k)
    k=counter;
   }
   cout<<k<<endl;
}	