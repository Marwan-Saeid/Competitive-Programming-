#include<bits/stdc++.h>
using namespace std ;
int arr[10000000];
void  f(int num,int in,int gg ){
    if(arr[num]!=arr[in]){
        cout<<"NO"<<endl;
        return;
    }
    if(num==gg||in==gg){
        cout<<"YES"<<endl;
        return;
    }
    f(num+1,in-1,gg);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    f(0,n-1,n/2);
}