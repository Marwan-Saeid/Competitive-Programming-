#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ; 
    cin >> n ;
    int arr1[n], arr2[n];
    string s1 ,s2="" ;
    for(int i=0;i<n;i++) {
    cin>>arr1[i];
    s1+=to_string(arr1[i]);
    }
    sort(s1.begin(),s1.end()); 
   for(int i=0;i<n;i++) {
    cin>>arr2[i];
    s2+=to_string(arr2[i]);
    }
    sort(s2.begin(),s2.end()); 
    if(s1==s2)
    cout<<"yes"<<endl;
    else 
    cout<<"no"<<endl; 
    return 0 ;
}