#include<bits/stdc++.h>
using namespace std ;
int main(){
   int n; cin >>n;
   deque<char>dq(n);
   for(int i=0;i<n;i++)
   cin>>dq[i];
   int counter=0,sum=0;
   for(int i=0;i<dq.size();i++){//5
      if(dq[i]=='R'){           
          sum+=counter;//0
          counter=0;
         bool flag=true;
         for(int j=i+1;j<n;j++){
             if(dq[j]=='L'){
             flag=false;
             break;
             }
             else
             counter++;
         }
         if(counter%2!=0&&flag==false)
         sum++;
         i+=counter;
         counter=0;
     }
    else if(dq[i]=='.')
    counter++;
    else
    counter=0;
   }
   sum+=counter;
   cout<<sum<<endl;
}