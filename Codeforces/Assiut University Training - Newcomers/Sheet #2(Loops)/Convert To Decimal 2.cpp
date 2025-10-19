#include<iostream>
#include<cmath>
using namespace std ;
int main ()
{
    long long  n , t , w ,m ;
    cin>> t; 
    for(int i=1 ;i<=t;i++)
    {
        long long  sum =0 ,k = 0 ;
        cin >> n ;
        while(n)
        {
            m=n%2;
            n=n/2;
            if(m==1)
            {
                w=pow(2,k) ;
                sum+=w ;
                k++ ;
            }
        }
    cout<<sum <<endl; 
    }
    return 0; 
}