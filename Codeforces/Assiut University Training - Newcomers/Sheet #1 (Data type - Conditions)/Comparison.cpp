#include<iostream>
#include<math.h>
using namespace std ;
int main ()
    {
      int A , B ;
      char S ;
      cin >> A >> S >> B ;
      if(S=='<') {
          if(A<B)
          cout<<"Right"<<endl; 
          else 
          cout<<"Wrong"<<endl; 
      }
      if(S=='>') {
          if(A>B)
          cout<<"Right"<<endl; 
          else 
          cout<<"Wrong"<<endl; 
      }
      if(S=='=') {
          if(A==B)
          cout<<"Right"<<endl; 
          else 
          cout<<"Wrong"<<endl; 
      }
      
        return 0 ;
    }