#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    vector<char> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    
    while (Q--) {
        string cmd;
        cin >> cmd;
        
        if (cmd == "pop_back" && !S.empty()) {
            S.pop_back();
        } else if (cmd == "front" && !S.empty()) {
            cout << S.front() << "\n";
        } else if (cmd == "back" && !S.empty()) {
            cout << S.back() << "\n";
        } else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            sort(S.begin() + min(l,r)- 1, S.begin() + max(l,r));
        } else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(S.begin() + min(l,r) - 1, S.begin() + max(l,r));
        } else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << "\n";
        } else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            for (int i = min(l,r) - 1; i < max(l,r); ++i) {
                cout << S[i];
            }
            cout << "\n";
        } else if (cmd == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }
    
    return 0;
}