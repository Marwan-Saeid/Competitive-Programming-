#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
    set<int> s11,s01,s10;
    int n; cin>>n;
    for(int i=0;i<n;i++){
      int x; cin>>x;
      string word ; cin>>word;
      if(word=="11")
      s11.insert(x);
      else if(word=="10")
      s10.insert(x);
      else if(word=="01")
      s01.insert(x);
    }
    int op1, op2;
    op2=op1=INT_MAX;
    if(s11.empty() && (s01.empty() || s10.empty())){
      cout<<-1<<endl;
      continue;
    }
    if(!s11.empty())
    op1=*s11.begin();
    if(!s01.empty() && !s10.empty())
    op2=(*s01.begin()+*s10.begin());
    
    cout<<min(op1,op2)<<endl;
  }
  return 0;
}