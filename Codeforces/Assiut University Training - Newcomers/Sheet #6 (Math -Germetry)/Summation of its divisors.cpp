#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long n,re=0; cin >> n; 
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			re += i;
			if ((n / i) != i)
				re += (n/i);
		}
	}
	cout << re << endl;
	return 0;
}