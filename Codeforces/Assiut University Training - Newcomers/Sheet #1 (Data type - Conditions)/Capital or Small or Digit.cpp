#include<iostream>
using namespace std ;
int main ()
{
   char X ='\0' ;
   cin >> X ;
   if(X >= 48 && X <= 57 ) {
   cout<<"IS DIGIT"<<endl;  }
   else if(X >=65 && X<=90){
   cout<<"ALPHA"<<endl; 
   cout<<"IS CAPITAL"<<endl; }
   else if (X>= 97 && X <=122){
    cout<<"ALPHA"<<endl; 
   cout<<"IS SMALL"<<endl; }
    return 0 ;
}