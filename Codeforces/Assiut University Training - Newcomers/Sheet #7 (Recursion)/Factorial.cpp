#include <iostream>
#include<string>
using namespace std;
long long  f(int num ){
		if(!num) return 1;
		return num*f(num-1);
		}
		int main()
		{
			int n; cin>>n;
			cout<<f(n)<<endl;
		}