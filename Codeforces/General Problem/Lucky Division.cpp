#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777} ;
   // book check =true;
    for(int i=0;i<12;i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}