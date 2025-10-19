#include <iostream>
#include<string>
using namespace std;
int arr[1000000],result=INT_MIN;
 long long f(int num,int in ){
		if(!in)return 0;
		return arr[num]+f(num-1,in-1);
		}
		int main()
	{
		int n,m; cin>>n>>m; 
		for(int i=0;i<n;i++)
		cin>>arr[i];
		cout<<f(n-1,m)<<endl;
		}