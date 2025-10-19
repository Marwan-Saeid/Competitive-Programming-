#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,c,d,sum=0,dig=INT_MAX; cin>>n>>c>>d;
        multiset<int>st;
        for(int i=0;i<n*n;i++){
            int m; cin>>m;
            st.insert(m);
            if(dig>m)
            dig=m;
        }
        bool check =1;
        for(int i=0;i<n&&check;i++){
             sum=dig;
            for(int j=0;j<n;j++){
            
                if(st.find(sum)!=st.end()){
                    auto it =st.find(sum);
                    st.erase(it);
                    sum+=d;
                }
                else{
                    check=0;
                    break;
                }
            }
            dig+=c;
        }
        if(st.empty())
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        
    }
}