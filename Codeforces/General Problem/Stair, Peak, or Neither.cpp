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
        L a,b,c;
        cin>>a>>b>>c;
        if(a<b&&b<c)
        cout<<"STAIR"<<endl;
        else if(a<b&&b>c)
        cout<<"PEAK"<<endl;
        else
        cout<<"NONE"<<endl;
    }
}