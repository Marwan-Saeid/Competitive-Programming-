#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<set>
using namespace std;
const int N = 2e5 + 5;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	long long  n, q, arr[N] = {}; cin >> n >> q;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 2; i <= n; i++)
		arr[i] += arr[i - 1];
	while (q--) {
		int l, r; cin >> l >> r;
		cout << arr[r] - arr[l - 1] << endl;
	}
	return 0;
}