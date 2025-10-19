#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<string>
using namespace std;
const int N = 200;
int main() {
	long long  a, b; cin >> a >> b;
	cout << __gcd(a, b) << " " << (a * b) / __gcd(a, b) << endl;
	return 0;
}