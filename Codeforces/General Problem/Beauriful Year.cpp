#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin>>n;
    int k=n+1;
    while(true)
    {
        n=k;
        int a=n%10;
        n/=10;
        int b=n%10;
        n/=10;
        int c=n%10;
        n/=10;
        int d=n%10;
       if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
       {
           cout<<k<<endl;
           return 0;
       }
       else 
       k++;
       
    }
    
    return 0 ;
}