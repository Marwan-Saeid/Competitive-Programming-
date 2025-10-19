#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int test=1;
    cin>>test;
    while(test--){
      int n; cin>>n;
      string result="";
      string word[n]; 
      map<string ,int> mp;
      for(int i=0;i<n;i++) {cin>>word[i]; mp[word[i]]++;    }
    for(int i=0;i<n;i++){
        bool check=0;
        for(int j=0;j<word[i].size();j++){
          string w1=word[i].substr(0,j+1);
        string w2=word[i].substr(j+1,word[i].size());
        if( w1.size()>0 && w2.size()>0 && mp[w1]>0 && mp[w2]>0){
          check=1;
          break;
        }
        }
        result+=((check)? '1' : '0');
    }
    
    cout<<result<<endl;
    }
    return 0;
}