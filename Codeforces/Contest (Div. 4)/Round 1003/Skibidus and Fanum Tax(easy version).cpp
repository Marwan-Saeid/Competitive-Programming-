#include <bits/stdc++.h>
using namespace std;



int main() {

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int b;
        cin >> b;

        vector<int>v;
        int last=min(a[0],b-a[0]),sz=0;

        for(int i=1;i<n;i++){
            if(min(a[i],b-a[i])>=last){
                last=min(a[i],b-a[i]);
                v.push_back(last);
                sz++;
            }
            else{
                last=max(a[i],b-a[i]);
                v.push_back(last);
                sz++;
            }
        }

        bool flag=0;
        for(int i=0;i<sz-1;i++){
            if(v[i]>v[i+1]){
                flag=1;
                break;
            }
        }
        if(!flag||n==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
