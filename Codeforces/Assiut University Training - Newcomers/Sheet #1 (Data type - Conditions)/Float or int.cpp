#include<iostream>
#include<math.h>
using namespace std ;
int main ()
    {
      float n ; 
      cin >> n ; 
      if(n==int (n))
      cout<< "int"<<" "<<n<< endl; 
      else
       cout<< "float"<<" "<<int(n)<<" "<<n-int(n)<< endl; 
       
        return 0 ;
    }