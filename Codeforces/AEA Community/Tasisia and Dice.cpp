#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int max=b-c,s=a-1;
        a-=1;
        cout<<max<<" ";
        while(a--){
            if((c-max)>=s){
               cout<<max<<" ";
               c-=max;
               s--;
                 }
                 else
                 {
                     if(s!=1)
                     {
                         cout<<1<<" ";
                         s--;
                         c--;
                     }
                     else
                     cout<<c<<" ";
                 }
        }
        cout<<endl;
    }
}