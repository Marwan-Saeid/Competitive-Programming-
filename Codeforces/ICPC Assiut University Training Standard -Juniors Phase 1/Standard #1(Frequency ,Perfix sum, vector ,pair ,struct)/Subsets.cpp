#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int arr[20] = {};
#define ison(n,k) (n>>k&1)
int main() {
	int  n; cin >> n;
	vector<vector<int>>s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < (1 << n); i++) {
		vector<int>ve;
		for (int j = 0; j < n; j++) {
			if (ison(i, j)) {
				ve.push_back(arr[j]);
			}
		}
		s.push_back(ve);
	}
	sort(s.begin(), s.end());
	for (auto it : s) {
		for (auto a : it) {
			cout << a << " ";
		}
		cout << endl;
	}
	//cout << (1 << 18) << endl;
	return 0;
}