#include <bits/stdc++.h>
#include<string>
using namespace std;
int arr[10000],result=INT_MIN;
void   f(int num ){
		if(0>num) return ;
		if(arr[num]>result)
		result=arr[num];
		f(num-1);
		}
		int main()
		{
			int n; cin>>n;
			for(int i=0;i<n;i++)
			cin>>arr[i];
			f(n-1);
			cout<<result<<endl;
		}