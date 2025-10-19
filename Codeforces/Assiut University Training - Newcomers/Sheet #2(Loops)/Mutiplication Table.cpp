#include<iostream>
#include <climits>
using namespace std ;
int main()
{
   int n ;
   cin>> n ;
   if(n>=1&&n<=50) {
   for(int i =1 ;i<=12 ;i++)
   {
       cout<< n<<" * "<<i<<" = "<<n*i<<endl;
   }
   }

    return 0 ;
}