#include<bits/stdc++.h>
using namespace std  ;
int main ()
{
   int t ;
   cin >> t; 
   while (t--)
   {
        string s , c; 
    cin >>s>> c; 
    int n = s.size()+c.size();
    bool check1 = true ;
    bool check2 = true ;
    for(int i =0 ; i< n ;i++)
    {    
        if(s.size()!=i && check1==true)
        cout<<s[i];
        else 
        check1 =false ;
        if(c.size()!=i && check2==true)
        cout<<c[i];
        else 
        check2 =false ;
    }
   cout<<endl; 
   }
    return 0 ;
}