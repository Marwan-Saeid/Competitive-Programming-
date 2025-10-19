#include<bits/stdc++.h>
using namespace std ;
bool Knowbit(long long n,int i)
{
    return (n>>i)&1;
}
int main(){
  int test; cin>>test;
  while(test--){
    int n ;cin>>n;
    vector<int> number_even, number_ood;
    set<int>different;
   int even[33]={},ood[33]={};
   
    if(n==3){
      cout<<2<<" "<<1<<" "<<3<<endl;
      continue;
    }
    
  int a =0, b=0;
   for(int i=0;i<n-2;i++){
     if(i%2==0){
       a^=i;
       number_even.push_back(i);
       for(int j=0;j<33;j++){
         if(Knowbit(i,j))
         even[j]++;
       }
     }
     else{
       b^=i;
      number_ood.push_back(i);
       for(int j=0;j<33;j++){
         if(Knowbit(i,j))
         ood[j]++;
       }
     }
   }
   
   if(a==b){
     number_even[0]=n-2;
     for(int j=0;j<33;j++){
         if(Knowbit(n-2,j))
         even[j]++;
       }
   }
   
   for(int i=0;i<32;i++){
    if(even[i]%2!=ood[i]%2)
    different.insert(i);
   }
   
   
   int n_even=0,n_ood=0;
   for(int i=0;i<31;i++){
    if(different.count(i)==1){
      if(even[i]%2==0){
        n_even+=(1<<i);
      }
      else{
        n_ood+=(1<<i);
      }
    }
    else{
     n_ood+=(1<<i);
     n_even+=(1<<i);  
    }
   }
  number_even.push_back(n_even);
  number_ood.push_back(n_ood);
  for(int i=0;i<min(number_ood.size(),number_even.size());i++)
  cout<<number_even[i]<<" "<<number_ood[i]<<" ";
  
  if(n%2!=0)
  cout<<number_even[number_even.size()-1];
  cout<<endl;
  }
  return 0;
}