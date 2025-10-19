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
#define marwan() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
int main()
{
     marwan();
     set<long long >s={};
     tc{
         long long n; cin>>n;
         bool flag=0;
         if(n%2!=0)
         cout<<"YES"<<endl;
         else{
             while(n%2==0){
                 n/=2;
             }
             if(n>1)
             cout<<"YES"<<endl;
             else
             cout<<"NO"<<endl;
         }
     };
}