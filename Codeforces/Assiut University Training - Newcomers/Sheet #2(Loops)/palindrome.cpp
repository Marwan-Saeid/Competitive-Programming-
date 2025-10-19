#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n,inverse=0;cin>>n;
   int temp=n;
   while(n!=0){
      inverse*=10;
      inverse+=n%10;
      n/=10;
   }
   cout<<inverse<<endl;
   if(temp==inverse)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
	return 0;
}