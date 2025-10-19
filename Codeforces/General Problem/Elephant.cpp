#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int number , counter=0;
    cin >>number;
    counter=number/5;
    if(number%5!=0)
    counter++;
    cout<<counter<<endl;
    return 0 ;
}