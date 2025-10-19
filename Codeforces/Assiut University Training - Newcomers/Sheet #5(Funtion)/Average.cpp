#include<bits/stdc++.h>
using namespace std ;
void average (int n ,double  arr[])
{   double  sum=0;
    for(int i=0 ;i<n;i++)
    {
    cin >>arr[i];
    sum+=arr[i];
    }
    cout<<fixed <<setprecision(7)<<sum/n<<endl;
    
}
int main ()
{
    int n ;
    cin >>n ;
    double  arr[n];
    average(n,arr);
    return 0;
}