#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<set>
using namespace std;
const int N = 1e5 + 5;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int n; int arr[N] = {}; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		++arr[x];
	}
	for (int i = 1; i <= 1e5; i++) {
		while (arr[i] != 0) {
			cout << i << " ";
			arr[i] -= 1;
		}
	}
	return 0;
}