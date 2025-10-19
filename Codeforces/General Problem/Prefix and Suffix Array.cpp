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
         L n; cin>>n;
        n--; n*=2;
        multiset<string>st;
        for( L i=0;i<n;i++){
            str a; cin>>a;
            st.emplace(a);
        }
        L counter=0;
        for(L i=0;i<n; i++){
            str a=*st.begin();
            if(!st.empty()){
             st.erase(st.find(a));
        }
         reverse(a.begin(),a.end());
           if(st.find(a)!=st.end())
           counter++;
        }
        if(counter==n/2)
        YES
        else
        NO
       // for(auto it: st)
      //  cout<<it<<endl;
    }
}