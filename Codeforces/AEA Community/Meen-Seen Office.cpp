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
int result (){
     L n,m ,a,b; char c;
    cin>>n>>m>>c;
    char arr[n][m];
    list<char>l;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
           if(arr[i][j]==c){
               if(i - 1 >= 0 &&arr[i-1][j]>='A'&&arr[i-1][j]<='Z'&&arr[i-1][j]!='.'&&arr[i-1][j]!=c)
               l.push_front(arr[i-1][j]);
                if(j - 1 >= 0 &&arr[i][j-1]>='A'&&arr[i][j-1]<='Z'&&arr[i][j-1]!='.'&&arr[i][j-1]!=c)
               l.push_front(arr[i][j-1]);
                if(j + 1 < m&&arr[i][j+1]>='A'&&arr[i][j+1]<='Z'&&arr[i][j+1]!='.'&&arr[i][j+1]!=c)
               l.push_front(arr[i][j+1]);
                if(i + 1 < n &&arr[i+1][j]>='A'&&arr[i+1][j]<='Z'&&arr[i+1][j]!='.'&&arr[i+1][j]!=c)
               l.push_front(arr[i+1][j]);
           }
        }
    }
    l.sort();
    l.unique();
    return l.size();
};
int main()
{
    marwan();
   
    cout<<result()<<endl;
}