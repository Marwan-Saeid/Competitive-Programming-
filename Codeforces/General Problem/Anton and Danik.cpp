#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,A=0,D=0;
     cin>>n;
     char arr[n];
     for(int i=0;i<n;i++)
     {
    cin>>arr[i];
    D+=(arr[i]=='D');
    A+=(arr[i]=='A');
     }
     if(A>D)
     cout<<"Anton"<<endl;
     else if(D>A)
     cout<<"Danik"<<endl;
     else
     cout<<"Friendship"<<endl;
}