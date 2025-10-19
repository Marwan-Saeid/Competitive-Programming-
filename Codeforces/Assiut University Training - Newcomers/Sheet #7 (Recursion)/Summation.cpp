#include <iostream>
#include<string>
using namespace std;
int arr[10000],result=INT_MIN;
 long long f(int num ){
		if(0>num)return 0;
		return arr[num]+f(num-1);
		}
		int main()
	{
		int n; cin>>n;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		cout<<f(n-1)<<endl;
		}