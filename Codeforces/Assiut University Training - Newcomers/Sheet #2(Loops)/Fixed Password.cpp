#include<iostream>
using namespace std ;
int main()
{
    int possword =1999 ;
    while(true)
    {
        int m;
        cin >> m ;
     
        if(m!=possword)
        {
            cout<<"Wrong"<<endl;
        }
        else {
        cout<<"Correct"<<endl; 
        
            return 0; 
        } 
       
    }
    return 0 ;
}