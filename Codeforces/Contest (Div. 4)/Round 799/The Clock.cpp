#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int test ; cin>>test;
   while(test--){
     string s; 
     int mins, counter=0;
     cin>>s>>mins;
     int plus_hour=mins/60;
     int plus_mins=mins-(plus_hour*60);
     int h=(s[0]-'0')*10+s[1]-'0';
     int m=(s[3]-'0')*10+s[4]-'0';
    
    
    string com=s;
    int check =0;
    while(check<2 ){
    
      
      h%=24;
      if(m>=60)
      h++;
      m%=60;
      
      if(s==com)
      check++;
      
      string w="";
      for(int i=s.size()-1;i>=0;i--)
      w+=s[i];
      if(w==s && s!=com){
      counter++;
        
      }
      
      h+=plus_hour, m+=plus_mins;
      if(m>=60)
      h++;
      h%=24;
      m%=60;
      
      if(h<10){
      s[0]='0';
      s[1]=('0'+h);
      }
      else{
        s[1]=(h%10)+'0';
        s[0]=(h/10)+'0';
      }
      if(m<10){
        s[3]='0';
        s[4]='0'+m;
      }
      else{
        s[4]=(m%10)+'0';
        s[3]=(m/10)+'0';
      }
      
    }
   string w ="";
   for(int i=s.size()-1;i>=0;i--)
      w+=com[i];
    if(com==w)
    counter++;
    cout<<counter<<endl;
   }
    return 0;
}