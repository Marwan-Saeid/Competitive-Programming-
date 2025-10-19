#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n  ,sum1 =0 , sum2=0 ; 
    cin >> n; 
    int m=n-1;
    int arr[n][n];
    for(int i=0 ; i<n ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            cin >>arr[i][j];
        }
    }
     for(int i=0 ; i<n ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            
          if(i==j)
          sum1+=arr[i][j];
            if(j==n-1-i)
           sum2+=arr[i][j];
        }
    }
    sum1=sum1-sum2;
    if(sum1<0)
    sum1=-sum1;
    cout<<sum1 <<endl; 
    return 0 ;
}