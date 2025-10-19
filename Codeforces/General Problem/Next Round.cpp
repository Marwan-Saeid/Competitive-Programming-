#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m,counter=0;
    cin>>n>>m;
    int arr[n ];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[m-1]&&arr[i]!=0)
        counter++;
    }
    cout<<counter<<endl;
    return 0;
}	