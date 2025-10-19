#include <iostream>
#include <cmath>
                 
#define ison(n,k) ((n)>>k&1)

using namespace std; 
int main() {
	int q,n; cin >> q>>n;
	while (q--) {
		int op,x; cin >> op>>x; 
		int h = 0;
		if (op == 1)
			h = ison(n, x);
		else if (op == 2) {
			bool check = ison(n, x);
			for (int i = 31; i >= 0; i--) {
				if (i != x) {
					if (ison(n, i))
						h += (1 << i);
				}
				else
				{
					if (!check)
						h += (1 << i);
					else
						h+= (1 << i);
				}
			}
			n = h;
		}
		else if (op == 3) {
			bool check = ison(n, x);
			for (int i = 31; i >= 0; i--) {
				if (i != x) {
					if (ison(n, i))
						h += (1 << i);
				}
			}
			n = h;
		}
		else if (op == 4) {
			bool check = ison(n, x);
			for (int i = 31; i >= 0; i--) {
				if (i != x) {
					if (ison(n, i))
						h += (1 << i);
				}
				else
				{
					if (!check)
						h += (1 << i);
				}
			}
			n = h;
		}
		cout << h << endl;
	}
	return 0;
}