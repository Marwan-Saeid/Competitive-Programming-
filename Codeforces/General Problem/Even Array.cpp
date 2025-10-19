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
        L n,ec=0,oc=0,k=0,e=0;  cin>>n;
        deque<int>dq(n);
        for(int i=0;i<n;i++){
            cin>>dq[i];
            (dq[i]%2==0)? ec++ :oc++;
            (i%2==0&&dq[i]%2!=0) ? k++ : e++;
        }
       if(ec==n/2&&oc==n/2||ec==n/2+1&&oc==n/2)
       cout<<k<<endl;
       else
       cout<<-1<<endl;
}
}