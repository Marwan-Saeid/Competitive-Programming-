#include<iostream>
using namespace std;
int n;
void f(int num){
	if(!num) return ;
	int k=(num%2==0)? 0:1;
	f(num/2);
	cout<<k;
	}
int main()
{
	int test; cin>>test;
	while(test--){
		cin>>n;
		f(n);
		cout<<endl;
		}
	}