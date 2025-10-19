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
        str s,c=""; cin>>s;
        c=s[0];c+=s[1];
        int n=stoi(c);
        if(n<12&&n!=0)
        cout<<s<<" AM"<<endl;
        else
        {
        if(n==0)
        cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
        else if (n==12)
        cout<<s<<" PM"<<endl;
        else if (n-12>=10)
        cout<<n-12<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
        else
         cout<<"0"<<n-12<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
        }
    }
}