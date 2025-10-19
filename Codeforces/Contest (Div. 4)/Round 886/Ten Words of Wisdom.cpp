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
        L test ,result=0,max=INT_MIN;
        cin>>test ;
        for(L i=1;i<=test ;i++){
            L a,b; 
            cin>>a>>b;
            if(a<=10&&b>=max){
            result=i;
            max=b;
            }
        }
        cout<<result<<endl;
    }
}