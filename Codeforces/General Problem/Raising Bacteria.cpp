#include<iostream >
using namespace std;
#define ison(n,k) ((n)>>(k)&1)
int main() {
	int x,counter=0; cin >> x;
	for (int i = 31; i >= 0; i--) {
		if (ison(x, i))
			counter++;
	}
	cout << counter << endl;
	return 0;
}