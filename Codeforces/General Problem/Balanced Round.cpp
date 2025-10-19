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
        L size, k ;cin>>size>>k ;
        L arr[size];
        vector<L>v;
        for(L i=0;i<size;i++)
        cin>>arr[i];
        sort(arr,arr+size);
        for(int i=1;i<size;i++){
            if((arr[i]-arr[i-1])<=k)
            v.push_back(1);
            else
            v.push_back(0);
        }
        v.push_back(-1);
        int result=0,a=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1)
            a++;
            else
            {
            result=max(result,a);
              a=0; 
            }
           
        }
        result=size-(result+1);
        cout<<result<<endl;
    }
}