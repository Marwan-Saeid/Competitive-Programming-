#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string text  ;
    getline(cin,text);
    int n =size(text ) ;
    for(int i=0 ; i <n ;i++)
    {
        if(text[i]=='\\')
        return 0 ;
        cout<<text[i];
    }
    return 0 ;
}