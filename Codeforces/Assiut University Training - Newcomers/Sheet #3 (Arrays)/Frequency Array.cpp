#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int arr[1000001]={0};
while(n--)
{
int k;
cin>>k;
if(arr[k]==0)
arr[k]++;
else
arr[k]++;
}
for(int i=1;i<=m;i++)
cout<<arr[i]<<endl;
}