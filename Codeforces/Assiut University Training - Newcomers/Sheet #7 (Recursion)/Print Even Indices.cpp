#include <iostream>
using namespace std;
int arr[1000];
void f(int num){
		if(!num) return ;
		if(num%2==0)
		cout<<arr[num]<<" ";
		f(num-1);
		}
		int main()
		{
			int n;
			cin >> n;
			for (int i = 0; i < n; i++)
				cin >> arr[i];
				f(n-1);
				cout<<arr[0];
		}