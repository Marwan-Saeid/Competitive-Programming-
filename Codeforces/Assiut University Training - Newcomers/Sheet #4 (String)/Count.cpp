#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   string num;
   cin >> num ;
   int sum =0;
   for(int i=0 ;i<size(num);i++)
   {
       sum+=num[i]-'0';
   }
   cout<< sum <<endl; 
    return 0 ;
}