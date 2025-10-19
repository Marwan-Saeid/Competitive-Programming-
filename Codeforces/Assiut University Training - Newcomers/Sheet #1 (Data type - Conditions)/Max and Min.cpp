#include<iostream>
using namespace std ;
int main ()
{
    int A ,B , C ,max , min ;
    cin >> A >> B >> C ;
    min = A ;
    if(min > B)
       min= B ;
    if(min > C)
       min = C ;
       max = A ;
       if( max < B)
         max =B ;
         if(max < C)
           max = C ;
           cout<< min <<" "<< max <<endl;
    return 0 ;
}