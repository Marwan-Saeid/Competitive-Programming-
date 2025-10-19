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
    int n ,k,min=INT_MAX; cin >>n;
    int arr[n];
    LL result=1;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            k=i;
        }
    }
    for(int i=0;i<n;i++){
        if(i==k)
        arr[i]+=1;
        result*=arr[i];
    }
    cout<<result<<endl;
}
}