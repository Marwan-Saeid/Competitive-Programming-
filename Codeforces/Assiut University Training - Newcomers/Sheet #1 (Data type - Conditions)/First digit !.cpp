#include<iostream>
using namespace std ;
int main ()
{
    int X ;
    cin>> X ;
    X=X/1000;
    if(X%2==0)
    cout<<"EVEN"<<endl;
    else
    cout<<"ODD"<<endl;
    return 0 ;
}