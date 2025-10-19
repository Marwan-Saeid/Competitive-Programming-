#include<iostream>
#include<cmath>
#include<string>
using namespace std;
const int N =200;
int main() {
	int arr[N] = {};
	string s; cin >> s;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		++arr[s[i]];
	}
	for (int i = 0; i <= 150; i++) {
		if (arr[i])
			cout << char(i) <<" "<< arr[i]	<< endl;
	}
	return 0;
}