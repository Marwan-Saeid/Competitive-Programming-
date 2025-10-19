#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int test ;cin>>test ;
  while(test--){
    int n ; cin>>n;
    string word ; cin>>word;
    long long counter=0,result=0;
    for(int i=0;i<n;i++){
      if(word[i]=='L'){
      counter+=i;
      }
    else{
      counter+=(n-1-i);
      }
      if(i<n/2)
      result+=n-1-i;
      else
      result+=i;
    }
    
    int l=0,r=n-1,rc=0;
    bool flag=1;
    for(int j=0;j<n;j++){
      int tester=1;
      while(counter < result && tester ){
        if(flag){
          if(word[l]=='L'){
          counter-=l;
          counter+=n-1-l;
          tester--;
        }
          l++;
          flag=0;
        }
      else{
        if(word[r]=='R'){
          counter-=n-1-r;
          counter+=r;
          tester--;
        }
          r--;
          flag=1;
      }
      }
    cout<<counter<<" ";
    }
    cout<<endl;
  }
    return 0;
}