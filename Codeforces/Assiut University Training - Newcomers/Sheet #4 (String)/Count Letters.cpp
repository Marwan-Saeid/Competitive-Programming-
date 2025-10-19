#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s; 
    cin >> s;
    sort(s.begin(),s.end());
    for(int i=0 ; i<size(s) ;i++)
    {
    int count=1 ;
        char c=s[i] ;
        while (s[i]==s[++i])
       count++; 
       cout<<c<<" : "<<count<<endl; 
       i--;
    }
    return 0 ;
}