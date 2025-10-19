#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5+5;
int arr[N] = {};
bool binary_search(int l , int r,int x ) {
	int mid = (l + r) / 2;
	while (r>=l) {
		if (arr[mid] == x)
			return true;
		else if (arr[mid] > x) {
			r = mid - 1;
			mid = (l + r) / 2;
		}
		else if (arr[mid] < x) {
			l = mid + 1;
			mid = (l + r) / 2;
		}
	}
	return false;
}
int main() {
	int n, q; cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	while (q--) {
		int x; cin >> x;
		if (binary_search(0, n - 1, x))
			cout << "found" << endl;
		else
			cout << "not found" << endl;
	}
	return 0;
}