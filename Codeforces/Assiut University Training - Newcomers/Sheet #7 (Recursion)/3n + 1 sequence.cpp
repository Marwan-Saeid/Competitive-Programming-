#include<bits/stdc++.h>
using namespace std ;
long long  n,result =0;
int f(int num){
    if (num==1)
    return 1;
    if (num%2==0)
    return 1 + f(num/2);
    else
    return 1 + f(num*3+1);
}
int main()
{
    cin>>n;
    cout<<f(n)<<endl;
}