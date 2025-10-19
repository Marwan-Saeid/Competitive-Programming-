#include<iostream>
#include<cmath>
using namespace std;
const int N =1e5+5;
int main() {
	int arr[N] = {};
	int n, q; cin >> n >> q;
	while (q--) {
		int a, b; cin >> a >> b;
		if (a == 1) {
			++arr[b];
		}
		else
			cout << arr[b] << endl;
	}
	return 0;
}