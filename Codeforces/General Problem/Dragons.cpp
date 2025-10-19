#include<bits/stdc++.h>
using namespace std ;
int main(){
  int power,t;
  cin>>power>>t;
  pair<int,int>p[t];
  for(int i=0;i<t;i++)
  {
      cin>>p[i].first>>p[i].second;
  }
 sort(p,p+t);
  for(int i=0;i<t;i++)
  {
      if(power>p[i].first)
      power+=p[i].second; 
      else{
          cout<<"NO"<<endl;
          return 0 ;
      }
      }
      cout<<"YES"<<endl;
}	