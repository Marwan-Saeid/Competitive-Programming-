#include<bits/stdc++.h>
typedef long long LL;
typedef int L;
using namespace std;
typedef string str;
#define vec vector<int>
#define SET set<LL>
#define tc LL t; cin >> t; while(t--)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define maro() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
bool check (LL n){
    str s=to_string(n);
 LL a=s.size()-1;
 for(L i=0;i<=s.size()/2;i++){
     if(s[i]!=s[a]){
         return 0 ;
     }
     a--;
 }
 return 1 ;
};
bool test(LL n ){
    LL a=n;
    str s=to_string(n);
    double b=0;
    for(int i=0;i<s.size();i++)
    b+=s[i]-'0';
    if(a/b==int(a/b))
    return 1 ;
    else
    return 0 ;
};
int main()
{
   maro();
  LL n ; cin >>n;
  if(test(n)==1&&check(n)==1)
  cout<<"Legendary!"<<endl;
  else if(test(n)==0&&check(n)==1||test(n)==1&&check(n)==0)
   cout<<"In the warning zone!"<<endl;
   else
    cout<<"Out of the course, you procrastinator!"<<endl;
}