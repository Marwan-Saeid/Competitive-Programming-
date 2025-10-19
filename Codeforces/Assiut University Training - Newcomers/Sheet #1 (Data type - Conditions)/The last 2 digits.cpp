#include <iostream>
#include<cmath>
using namespace std ;
int main() {
int A ,B ,C ,D ,m ;
cin >>A >>B >>C >>D ;
m=((A%100)*(B%100)*(C%100)*(D%100))%100 ;
if(m<10)
cout<<0<<m<<endl; 
else 
cout<<m<<endl;
    return 0;
}