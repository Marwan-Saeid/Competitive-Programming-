#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,m,k=0,counter=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int s[m];
    for(int i=0;i<m;i++)
    cin>>s[i];
    for(int i=0;i<n;i++ )
    {
        if(arr[i]==s[k])
        {
        k++;
        counter++;
        }
    }
    if(counter==m)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}