#include <iostream>
using namespace std;
int arr[1000];
void f(int num,int in){
		if(num<0) return ;
		for(int i=0;i<in;i++)
		cout<<" ";
		for(int i=0;i<num;i++)
		cout<<"*";
		cout<<endl;
		f(num-2,in+1);
		}
		int main()
		{
			int n;
			cin >> n;
			f(n*2-1,0);
		}