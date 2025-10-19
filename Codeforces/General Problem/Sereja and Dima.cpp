#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,s=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int right=n-1;
    int lift=0;
    bool check =true;
    while(n--)
    {
        if(check)
        {
            if(arr[right]>arr[lift])
            {
                s+=arr[right];
                right--;
            }
            else
            {
                s+=arr[lift];
                lift++;
            }
            check=false;
        }
        else
        {
            if(arr[right]>arr[lift])
            {
                d+=arr[right];
                right--;
            }
            else
            {
                d+=arr[lift];
                lift++;
            }
            check=true;
        }
    
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}