#include<iostream>
using namespace std;
#define ison(n,k) ((n)>>(k)&1)
int main() {
	int k, t; cin >> t;
	while (t--) {
		cin >> k; int f = 0 ,result=0;
		for (int i = 31; i >= 0; i--) {
			if (ison(k, i)) {
				f = i;
				break; 
			}
		}
		for (int i = 0; i < f; i++) {
			result += (1 << i);
		}
		cout << result << endl;
	}

	return 0;
}