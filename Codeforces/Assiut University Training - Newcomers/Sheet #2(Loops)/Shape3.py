#include<iostream>
using namespace std ;
int main ()
{
    int n,e= 1,m ;
    cin >> n ;
    int k =n;
    for(int i =1 ;i<=n;i++)
    {
        for(int j =n-1 ;j>=i; j--)
        {
            cout<<" "; 
        }
        for(int w=1;w<=e;w++)
        {
            cout<<"*";
        }
        e+=2;
        m=e-2;
        k-- ;
        cout<<endl; 
    }
    int l =1 ;
    if(k==0)

    {
        for(int i=n;i>=1;i--)
        {
            for(int j=m;j>=1;j--)
            {
                cout<<"*";
            }
        cout<<endl; 
            for(int w=1;w<=l;w++)
            {

                cout<<" ";
            }
            m-=2;
            l+=1;
            
            
        }
    }
    
    return 0; 
}