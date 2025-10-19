#include<iostream>
using namespace std ;
int main ()
    {
        int A , B , C  , min , max  , mid  ;
        cin >> A >> B >> C ;
        min =A ;
        if(min >=B )
        min = B ;
        if(min >=C )
        min = C ;
        max=A ;
        if(max<=B)
        max=B ;
        if(max<=C)
        max=C ;
        if(A==max &&B==min || B==max &&A==min)
        mid =C; 
         if(A==max &&C==min || C==max &&A==min)
        mid =B; 
         if(B==max &&C==min || C==max &&B==min)
        mid =A; 
        cout<<min <<endl; 
        cout<<mid <<endl; 
        cout<<max <<endl; 
        cout<<endl; 
        cout<<A <<endl; 
        cout<<B <<endl; 
        cout<<C <<endl; 
        
        return 0 ;
    }