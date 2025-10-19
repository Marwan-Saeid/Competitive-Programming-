#include<iostream>
using namespace std ;
int main ()
{
    int n ,m ,k ;
    bool y=false ;
    cin >> n; 
    int arr[n];
    for(int i =0 ;i<n;i++)  {
    cin>>arr[i];  }
    cin>>m ; 
    for(int j=0;j<n;j++)
    {
        if(arr[j]==m){
        k=j;
       
        y=true ;
        break;
        }
    }
    if(y==true)
    cout<<k<<endl; 
    else 
    cout<<-1<<endl; 
    return 0 ;
}