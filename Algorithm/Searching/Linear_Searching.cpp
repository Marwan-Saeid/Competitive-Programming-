#include <iostream>
using namespace std;

int main() 
{
   int size; cin>>size;
   int items[size];
   for(int&x :items) cin>>x;
   
   
   int value; cin>>value;
   
   bool flag=false;
   for(int item:items){
     if(item==value){
       flag=true;
       break;
     }
   }
   
   cout<<(flag?"Found":"Not Found")<<endl;
  return 0;
}