#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin >> s; 
    int n =size(s)-1 ;
    bool check =true ;
    for(int i=0 ;i<size(s)/2;i++)
    {
        if(s[i]!=s[n])
        {
            check =false ;
            break ; 
        }
        n--;
    }
    if(check)
    cout<<"YES"<<endl; 
    else 
    cout<<"NO"<<endl; 
    return 0 ;
}