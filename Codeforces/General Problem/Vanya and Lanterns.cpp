#include<bits/stdc++.h>

using namespace std ;

int n,l ,arr[1005]={},ma=INT_MIN;
double result;
int main(){
    cin>>n>>l;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    sort(arr,arr+n);
    
    for(int i=1;i<n;i++)
    ma=max(ma,arr[i]-arr[i-1]);
    
    result=max(arr[0]/1.0,max(ma/2.0,l-arr[n-1]/1.0));
        cout << fixed << setprecision(9) << result << endl;
}