#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for(int i=2 ;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false  ;
            return 0;
        }
    }
    return true;
}
int main ()
{
    
    int n,t;
    cin >>t;
    while(t--)
    {
    cin >> n;
      if(n==1)
      {
        cout<<"NO"<<endl;
      }
       else if(prime(n)==1)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0 ;
}