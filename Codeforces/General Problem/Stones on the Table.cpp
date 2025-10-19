#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,counter=0;
    cin >>n;
    char arr[n];
    for (int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        counter++;
    }
    cout<<counter<<endl;
}