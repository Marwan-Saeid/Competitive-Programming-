#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int>f(n+1);
        int m = 0;
        for (int i = 0; i < n*2; i++) {
            int x;
            cin >> x;
            ++f[x];
            m = max(m, x);
        }
        bool flag=1;
        for (int i = 0; i <= n; i++) {
             if (f[i]==0){
               cout<<"YES"<<endl;
               flag=0;
               break;
             }
            if (f[i]==1){
              cout<<"NO"<<endl;
              flag=0;
              break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
    }
    return 0;
}