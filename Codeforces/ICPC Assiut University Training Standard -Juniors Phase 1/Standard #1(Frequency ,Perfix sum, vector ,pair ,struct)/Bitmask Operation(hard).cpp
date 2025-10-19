#include<iostream>
using namespace std; 
#define ison(n,k) (n>>k&1)
int main()
{
	int q, n; cin >> n >> q;
	while(q--){
		int op; cin >> op;
		if (op == 1) {
			for (int i = 0; i <= 31; i++) {
				if (!ison(n, i)) {
					n = n | (1 << i);
					break;
				}
			}
			cout << n << endl;
		}
		else if (op == 2) {
			for (int i = 0; i <= 31; i++) {
				if (ison(n, i)) {
					n &= ~(1 << i);
					break;
				}
			}
			cout << n << endl;
		}
		else if (op==3) {
			if (n == 0)
				n = -1;
			else {
				for (int i = 0; i <= 31; i++) {
					if (ison(n, i))
						break;
					else {
						n |= (1 << i);
					}
				}
			}
			cout << n << endl;
		}
		else if (op == 4) {
			for (int i = 0; i <= 31; i++) {
				if (!ison(n, i))
					break;
				else
					n &= ~(1 << i);
			}
			cout << n << endl;
		}
		else if (op == 5) {
			if( (n & n - 1) == 0 && n>0)
				cout << "is power of two" << endl;
			else
				cout << "not power of two" << endl;
		}
	}
	//cout << INT_MAX/2 << endl;
	return 0;
}