#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int n,counter=0,max=INT_MIN,k,min=INT_MAX;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   for(int i=0;i<n;i++)
   {
       if(max<v[i])
       max=v[i];
   }
   for(int i=0;i<n;i++)
   {
       if(max==v[i])
       {
           k=i;
           break;
       }
   }
   for(int i=0;i<n;i++)
   {
       if(k==0)
       break;
       swap(v[k-1],v[k]) ;
       counter++;
       k--;
   }
   for(int i=0;i<n;i++)
   {
       if(min>v[i])
       min=v[i];
   }
   for(int i=0;i<n;i++)
   {
       if(min==v[i])
           k=i;
   }
   for(int i=0;i<n;i++)
   {
       if(k==n-1)
       break;
       swap(v[k],v[k+1]) ;
       counter++;
       k++;
   }
   cout<<counter<<endl;
}