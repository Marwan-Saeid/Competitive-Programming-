#include<iostream>
#include <climits>
using namespace std ;
int main ()
{
    int t ;
    cin >> t ;
    while(t--)
    { 
        int n , k = 1  ;
    int min =INT_MAX ;
    cin >> n ;
        int arr[n];
    for(int i=0 ;i<n; i++)
    cin >> arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=k;j<n;j++)
        {
            if(min>(arr[i]+arr[j]+j-i)) {
            min=(arr[i]+arr[j]+j-i) ; 
              
            }
        }
      k+=1;
    }
     cout<<min <<endl;
    }
    return 0 ;
}