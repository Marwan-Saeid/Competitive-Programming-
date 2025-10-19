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
     tc{
     int n,a,b; cin >>n>>a>>b;
     if(n==1)
     cout<<n*a<<endl;
     else if(n%2==0)
     cout<<min(n*a,b*(n/2))<<endl;
     else
     cout<<min(n*a,b*(n/2)+a*(n%2))<<endl;
     };
}