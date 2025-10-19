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
    int n ,k,counter=0;  cin >>n>>k;
    str s; cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            counter++;
            i+=k-1;
        }
    }
    cout<<counter<<endl;
    }
}