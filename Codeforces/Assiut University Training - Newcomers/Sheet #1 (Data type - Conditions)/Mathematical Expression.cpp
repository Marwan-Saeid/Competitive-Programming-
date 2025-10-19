#include<iostream>
#include<math.h>
using namespace std ;
int main ()
    {
      int A , B , C ;
      char S , Q='=' ;
      cin >>A>>S>>B>>Q >>C ;
      if(S=='+'&&Q=='='){
          if(A+B==C)
          cout<<"Yes"<<endl; 
          else 
          cout<<(A+B)<<endl; 
      }
      if(S=='-'&&Q=='='){
          if(A-B==C)
          cout<<"Yes"<<endl; 
          else 
          cout<<(A-B)<<endl; 
      }
      if(S=='*'&&Q=='='){
          if(A*B==C)
          cout<<"Yes"<<endl; 
          else 
          cout<<(A*B)<<endl; 
      }
      
        return 0 ;
    }