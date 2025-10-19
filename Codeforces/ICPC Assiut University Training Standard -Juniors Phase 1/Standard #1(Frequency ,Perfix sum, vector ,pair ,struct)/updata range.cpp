#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<set>
using namespace std;
const int N = 1e5 + 5;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int  n, q; cin >> n >> q;
	long long arr[N] = {}, A[N] = {};
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	while (q--) {
		int l, r, val; cin >> l >> r >> val;
		A[l] += val;
		A[r + 1] -= val;
	}
	for (int i = 1; i <= n; i++) {
		A[i] += A[i - 1];
		arr[i] += A[i];
		cout << arr[i]<<" ";
	}
	return 0;
}