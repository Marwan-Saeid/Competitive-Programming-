#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;cin>>n; int e=1;
   for(int i=1;i<=n;i++){
       for(int j=n;j>i;j--){
           cout<<" ";
       }
       for(int j=1;j<=e;j++){
           cout<<"*";
       }
       e+=2;
       cout<<endl;
   }
	return 0;
}