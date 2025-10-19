#include<bits/stdc++.h>
using namespace std ;
int arr[10000];
float f(int num ){
    if(num<0) return 0.0;
    return arr[num]+f(num-1);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    float x=float(n);
    cout<<fixed << setprecision(6)<<f(n-1)/x<<endl;
    
}