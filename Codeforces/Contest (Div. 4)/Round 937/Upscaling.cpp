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
        bool check=1;
        for(L i=0;i<n;i++){
            L counter=0;
            str s="";
            while(true){
                if(check){
                    cout<<"##";
                    s+="##";
                    counter++;
                    check=0;
                }
                if(counter==n) break;
                if(!check){
                    cout<<"..";
                    s+="..";
                    counter++;
                    check=1;
                }
                if(counter==n) break;
            }
            if(counter%2==0)
            check=!check;
            cout<<endl<<s<<endl;
        }
    }
}