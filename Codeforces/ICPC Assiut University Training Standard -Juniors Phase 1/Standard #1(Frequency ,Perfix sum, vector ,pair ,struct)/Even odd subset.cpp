#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int arr[20] = {};
#define ison(n,k) (n>>k&1)
int main() {
	int  n,counter=0; cin >> n; 
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < (1 << n); i++) {
		int o = 0, e = 0;
		for (int j = 0; j < n; j++) {
			if (ison(i, j)) {
				if (arr[j] % 2 == 0)
					e++;
				else o++;
			}
		}
		if (e > o)
			counter++;
	}
	cout << counter << endl;
	return 0;
}