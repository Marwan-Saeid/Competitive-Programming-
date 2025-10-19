#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  ll ref[]={0,9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999,99999999999,
    999999999999,9999999999999,99999999999999,999999999999999,9999999999999999,99999999999999999,
    999999999999999999
  };
  vector<ll> ref_digital ;
  ref_digital.push_back(0);
  for(int i=1;i<18;i++){
    ll temp=ref[i]-ref[i-1];
    temp*=i;
    temp+=ref_digital.back();
    ref_digital.push_back(temp);
  }
  int test; cin>>test;
  while(test--){
    ll k ; cin>>k;
    int index=0;
    for(int i=1;i<19;i++){
      if(k<=ref_digital[i]){
        index=i;
        break;
      }
    }
    ll digit=((k-ref_digital[index-1]-1)/(index));
    // cout<<digit<<endl;
    digit+=ref[index-1]+1;
    string represent_digital=to_string(digit);
    ll number=(k-ref_digital[index-1]-1)%index;
    cout<<represent_digital[number]<<endl;
    // cout<<number<<endl;
    // cout<<index<<endl;
  }
  return 0; 
}