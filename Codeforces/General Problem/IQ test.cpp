#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,ecounter=0,ocounter=0;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        ecounter++;
        else
        ocounter++;
        }
        if(ecounter<ocounter)
        {
            for(int i=1;i<=n;i++)
            {
                if(arr[i]%2==0)
                {
                    cout<<i<<endl;
                    return 0;
                }
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(arr[i]%2!=0)
                {
                    cout<<i<<endl;
                    return 0;
                }
            }
        }
}