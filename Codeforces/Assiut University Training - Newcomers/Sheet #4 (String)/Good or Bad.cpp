#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n;
    while(n--)
    {
       string s ;
    cin >> s ;
    bool check =false ;
    for(int i =0 ; i<size(s)-2 ;i++)
    {
       if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
       check =true ;
        if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
       check =true ;
    }
    if(check==true )
    cout<<"Good"<<endl; 
    else 
    cout<<"Bad"<<endl;  
    }
    return 0 ;
}