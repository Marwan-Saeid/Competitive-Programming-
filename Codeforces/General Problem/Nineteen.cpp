#include<bits/stdc++.h>
using namespace std ;
int main(){
    int count1=0,count2=0,count3=0,count4=0,n=0;
    string s; cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='n')
        count1++;
        if(s[i]=='e')
        count2++;
        if(s[i]=='i')
        count3++;
        if(s[i]=='t')
        count4++;
    }
    bool check=1;
    if(count1>=3){
    count1-=3;n++; check=0;}
    count2/=3;
  if(check==0){
       while(count1>=2){
       if(count1>=2){
       n++;
       count1-=2;
       }
       else
       break;
   }
  }
    int k=min(n,min(count2,min(count3,count4)));
    cout<<k<<endl;
}