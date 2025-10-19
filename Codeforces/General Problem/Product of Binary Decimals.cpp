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
    set<int>st={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
    tc{
        L n; cin>>n;
        
       if(st.find(n)!=st.end()||n==1)
        YES
        else
        {
            bool flag=1;
        while(true){
            bool check=0;
            flag=0;
         auto it=st.begin();
            for(L i=0;i<31;i++){
            if(n%*it==0){
                n/=*it; check=1; flag=1;
                break;
                }
                else
                {
                it++;
                }
            }
            if(n==1&&check&&flag){
            YES  break;}
            if(!flag)
            break;
        }
        if(!flag)
        NO
        }
    }
}