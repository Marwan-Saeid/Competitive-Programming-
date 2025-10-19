#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int result=n1+n2+n3;
    if(result<n1*n2*n3)
    result=n1*n2*n3;
    if(result<(n1+n2)*n3)
    result=(n1+n2)*n3;
    if(result<n1*(n2+n3))
    result=n1*(n2+n3);
    if(result<n1*n2+n3)
    result=n1*n2+n3;
    if(result<n1+n2*n3)
    result=n1+n2*n3;
    cout<<result<<endl;
}