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
    int n,k;
    cin>>n>>k;
    deque<int>dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
    while(!dq.empty()){
    int counter=0,min=INT_MAX;
    for(int i=0;i<dq.size();i++){
        if(counter!=k){
        if(min>dq[i]){
         min=dq[i];}
         dq.pop_front();
         i=-1;
        }
        if(counter==k)
        break;
        counter++;
    }
    cout<<min<<" ";
    }
    if(!dq.empty()){
       int  min=INT_MAX ;
    for(int i=0;i<dq.size();i++)
    {
        if(min>dq[i]){
         min=dq[i];}
    }
    cout<<min<<endl;
    }
}