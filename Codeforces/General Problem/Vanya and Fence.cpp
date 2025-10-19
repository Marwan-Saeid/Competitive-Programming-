#include <iostream>
using namespace std;
int main() {
int n,h,ai,width=0;
cin>>n>>h;
while(n>0){
    cin>>ai;
    if(ai>h)
    width+=2;
    else
    width++;
    n--;
}
cout<<width;
 
 
    return 0;
}