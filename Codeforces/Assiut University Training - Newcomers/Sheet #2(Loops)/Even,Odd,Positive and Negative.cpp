#include<iostream>
using namespace std ;
int main()
{
    int n , m , Even=0 , Odd=0 , Positive=0 , Negative=0 ;
    cin >>n; 
    for(int i=1;i<=n;i++)
    { 
        cin>>m ;
        if(m%2==0) 
        Even++; 
      else 
            Odd++;
       
        if(m>0)
           Positive++; 
        else if(m<0)
            Negative++;
    }
     cout<<"Even: "<<Even<<endl; 
     cout<<"Odd: "<<Odd<<endl;
     cout<<"Positive: "<<Positive<<endl; 
     cout<<"Negative: "<<Negative<<endl; 
     
    return 0 ;
}