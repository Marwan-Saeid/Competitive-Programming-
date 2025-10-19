#include<iostream>
using namespace std;
int main() {
	int test; cin >> test; 
	while (test--) {
		long long x,sum=0; cin >> x; 
		while (x != 0) {
			sum += x;
			x /= 2;
		}
		cout << sum << endl;
	}
}