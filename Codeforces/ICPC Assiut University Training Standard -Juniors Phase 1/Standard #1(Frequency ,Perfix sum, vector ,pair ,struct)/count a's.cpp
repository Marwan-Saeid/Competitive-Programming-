#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<set>
using namespace std;
const int N = 1e5 + 5;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	string s; cin >> s; 
	int q; cin >> q;
	 int size = s.size();
	int arr[N] = {};
	for (int i = 0; i < size; i++) {
		if (s[i] == 'a')
			++arr[i+1];
	}
	for(int i=1;i<=N;i++)
	arr[i]+=arr[i-1];
	while (q--) {
		int l, r; cin >> l >> r;
		cout << arr[r] - arr[l-1] << endl;
	}
	return 0;
}