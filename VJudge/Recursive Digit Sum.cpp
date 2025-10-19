#include<bits/stdc++.h>
using namespace std ;
string number="";
int n; 
long long solve(int i){
  if(i>=number.size()) return 0;
  return (number[i]-'0')+solve(i+1);
}
int main(){
  cin>>number;
  cin>>n;
  number=to_string(solve(0)*n);
  while(number.size()>1){
    number=to_string(solve(0));
  }
  cout<<number<<endl;
}