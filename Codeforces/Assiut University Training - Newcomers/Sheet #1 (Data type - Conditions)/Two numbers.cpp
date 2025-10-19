#include<iostream>
#include<math.h>
using namespace std ;
int main ()
    {
       float  A ,B  ;
       cin >>A >>B ;
       float m=A/B ;
       cout<<"floor "<<A<<" / "<<B<<" = "<<floor(m)<<endl;
       cout<<"ceil "<<A<<" / "<<B<<" = "<<ceil(m)<<endl;
       cout<<"round "<<A<<" / "<<B<<" = "<<round(m)<<endl;
       
        return 0 ;
    }