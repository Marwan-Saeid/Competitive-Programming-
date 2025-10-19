#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
typedef string str;
#define vec vector<int>
#define SET set<LL>
#define tc LL t; cin >> t; while(t--)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define marwan() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
int main()
{
    marwan();
  tc{
      str s,c[4]={"abc","acb","bac","cba"}; cin >>s;
      bool check =1;
      for(int i=0;i<4;i++){
          if(s==c[i]){
              YES
              check=0;
              break;
          }
      }
      if(check)
      NO
  }
}