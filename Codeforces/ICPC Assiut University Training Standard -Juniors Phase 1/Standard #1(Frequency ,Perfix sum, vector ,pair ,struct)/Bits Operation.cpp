#include<iostream>
using namespace std;
int main() {
	int q, n; cin >> q >> n;
	while(q--){
		int op; cin >> op;
		if(op==1){
			int x; cin >> x;
			n = n | x;
		}
		else if(op==2){
			int x; cin >> x; 
			n = n&x;
		}
		else if (op==3){
			int x; cin >> x;
			n = n ^ x;
		}
		else if(op==4){
			n = ~n;
		}
		cout << n << endl;
	}
}