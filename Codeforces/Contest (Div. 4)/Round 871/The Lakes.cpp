#include<bits/stdc++.h>
using namespace std ;
#define ll long long
// int128 
__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}
bool cmp(__int128 x, __int128 y) { return x > y; }
// permatation & companation 
namespace combinatorics
{
    ll MOD;
    vector<ll> fac,inv,finv;
    ll nCr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return(0);
        return(fac[x]*finv[y]%MOD*finv[x-y]%MOD);
    }
    ll nPr(ll x,ll y)
    {
        if(x<0||y>x||y<0)return 0;
        return fac[x]*finv[x-y]%MOD;
    }

    ll power(ll b,ll n)
    {
        b%=MOD;
        ll s=1;
        while(n)
        {
            if(n%2==1)s=s*b%MOD;
            b=b*b%MOD;
            n/=2;
        }
        return s;
    }

    void init(int n,ll mod)
    {
        fac.resize(n+1);
        inv.resize(n+1);
        finv.resize(n+1);
        MOD=mod;
        fac[0]=inv[0]=inv[1]=finv[0]=finv[1]=1;
        for(ll i=1;i<=n;++i)fac[i]=fac[i-1]*i%MOD;
        for(ll i=2;i<=n;++i)inv[i]=MOD-MOD/i*inv[MOD%i]%MOD;
        for(ll i=2;i<=n;++i)finv[i]=finv[i-1]*inv[i]%MOD;
    }

    ll mul(ll a,ll b)
    {
        return ((a%MOD)*(b%MOD))%MOD;
    }

    ll add(ll a,ll b)
    {
        return ((a%MOD)+(b%MOD))%MOD;
    }

    ll sub(ll a,ll b)
    {
        return (((a-b)%MOD)+MOD)%MOD;
    }

    ll divide(ll a,ll b)
    {
       return mul(a,power(b,MOD-2));
    }

    ll Inv(int x)
    {
        return power(x,MOD-2);
    }

    ll catalan(int n)
    {
        return (nCr(2*n,n)*Inv(n+1))%MOD;
    }

    ll StarsAndPars(ll n,ll k)
    {
        return nCr(n+k-1,k-1);
    }

};
using namespace combinatorics;

// bitwise 
bool Knowbit(ll n,int i)
{
    return (n>>i)&1;
}

ll Setbit(ll n,int i)
{
    return n|(1<<i);
}

ll flip(ll n,int i)
{
    return n^(1<<i);
}

bool isPowerOfTwo(int n)
{
    if(n==0)return 0;
    return !(n&(n-1));
}

ll Resetbit(ll n,int i)
{
    return n&(~(1<<i));
}

int main(){
  int test; cin>>test;
  while(test--){
    int n , m ; cin>>n>>m;
   vector<vector<int>> arr(n, vector<int>(m));
    set<pair<int,int>>nodes ;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>arr[i][j];
        if(arr[i][j]>0)
        nodes.insert({i,j});
      }
    }
    // for(pair<int,int>p:nodes){
    //   cout<<p.first<<" "<<p.second<<endl;
    // }
    set<pair<int,int>>visited;
    ll result=0;
    for(pair<int,int> p : nodes){
      ll sum=0;
      stack<pair<int,int>>st;
      if(!visited.count(p)){
      st.push(p);
      visited.insert(p);
      }
      while(!st.empty()){
        pair<int,int>temp=st.top();
        // cout<<temp.first<<"   "<<temp.second<<endl;
        st.pop();
        sum+=arr[temp.first][temp.second];
        if(temp.first-1 >=0  &&!visited.count({temp.first-1,temp.second}) &&arr[temp.first-1][temp.second]){
        st.push({temp.first-1,temp.second});
        visited.insert({temp.first-1,temp.second});
        }
        if(temp.first+1 <=n-1 && !visited.count({temp.first+1,temp.second}) && arr[temp.first+1][temp.second]){
        st.push({temp.first+1,temp.second});
        visited.insert({temp.first+1,temp.second});
        }
        if(temp.second-1 >=0 && !visited.count({temp.first,temp.second-1}) && arr[temp.first][temp.second-1]){
        st.push({temp.first,temp.second-1});
        visited.insert({temp.first,temp.second-1});
        }
        if(temp.second+1 <=m-1 && !visited.count({temp.first,temp.second+1}) && arr[temp.first][temp.second+1]){
        st.push({temp.first,temp.second+1});
        visited.insert({temp.first,temp.second+1});
        }
      }
      result=max(result,sum);
      // cout<<"**********"<<endl;
    }
    cout<<result<<endl;
    // cout<<"---------"<<endl;
  }
    return 0;
}