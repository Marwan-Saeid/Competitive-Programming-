#include<iostream>
using namespace std;
const int N = 1e5 + 5;
int main() {
	int n, q; cin >> n >> q;
	long long arr[N] = {};
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 2; i <= n; i++) {
		arr[i] += arr[i - 1];
	}
	while (q--) {
		int l, r; cin >> l >> r;
		cout << arr[r] - arr[l - 1] << endl;
	}
	return 0;
}