#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    float sum=0;
    for(int i=1;i<=size;i++)
    {
    cin>>arr[i];
    sum+=arr[i];
    }
    cout<<fixed<<setprecision(12) <<sum/size<< endl;
    return 0;
}