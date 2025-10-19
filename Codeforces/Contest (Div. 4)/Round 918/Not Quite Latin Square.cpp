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
    int a=0,b=0,c=0;
   char arr[3][3];
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
       cin>>arr[i][j];
       if(arr[i][j]=='A'){a++;}
       if(arr[i][j]=='B'){b++;}
       if(arr[i][j]=='C'){c++;}}
   }
   if(a==2)
   cout<<"A"<<endl;
   if(b==2)
   cout<<"B"<<endl;
   if(c==2)
   cout<<"C"<<endl;
    }
}