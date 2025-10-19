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
     int a,b,c;  cin>>a>>b>>c;
     if(c%2==1)
     a++;
     if(a>b)
     cout<<"First"<<endl;
     else
     cout<<"Second"<<endl;
     };
}