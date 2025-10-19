#include <bits/stdc++.h>
 
using namespace std;
const int N = 2e5 + 5;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    queue<int> q;
    while (t--) {
        int type;
        cin >> type;
        if (type == 1) {
            int n;
            cin >> n;
            q.push(n);
        } else if (type == 2) {
            if (!q.empty())
                q.pop();
        } else {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << "Empty!\n";
        }
    }
    return 0;
}
