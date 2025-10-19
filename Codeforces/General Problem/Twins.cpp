#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,sum=0,counter=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int m=arr[n-1] ;
    for(int i=n-2;i>=0;i--)
    {
        if(m>(sum-m))
        {
        cout<<counter<<endl;
        return 0;
        }
        counter++;
        m+=arr[i];
    }
    cout<<counter<<endl;
    return 0;
}