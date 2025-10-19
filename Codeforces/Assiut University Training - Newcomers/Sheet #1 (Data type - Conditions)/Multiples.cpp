#include<iostream>
using namespace std ;
int main ()
{
    float  A , B ;
    cin >> A >> B ;
    if(A/B == int(A/B) || B/A == int(B/A))
    cout<<"Multiples"<<endl; 
    else
    cout<<"No Multiples"<<endl; 
    return 0; 
}